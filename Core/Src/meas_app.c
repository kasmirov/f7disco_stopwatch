#include "meas_app.h"
#include "data_struct.h"
#include "cmsis_os.h"

extern osMessageQueueId_t MsgQueue;
MeasState_t meas_state;
ObjectState_t obj_state;

#define left_sensor 1
#define right_sensor 0

void Meas_Process()
{
  
  float cnt = 0.001f;
  uint32_t start_time = 0;
  uint32_t end_time = 0;
  DataStruct_t msg;
  
  while(1)
  {
    if (meas_state)
    {
      switch(obj_state)
      {
      case IDLE:
        if(left_sensor) obj_state = STAT_LEFT; 
        if(right_sensor) obj_state = STAT_RIGHT;
        break;
      case STAT_LEFT:
        if(left_sensor) obj_state = STAT_LEFT; 
        if(right_sensor) obj_state = STAT_RIGHT;
        if(!left_sensor && !right_sensor) 
        {
          obj_state = MOVE_RIGHT;
          start_time = HAL_GetTick();
        }
        break;
      case STAT_RIGHT:
        if(left_sensor) obj_state = STAT_LEFT; 
        if(right_sensor) obj_state = STAT_RIGHT;
        if(!left_sensor && !right_sensor) 
        {
          obj_state = MOVE_LEFT;
          start_time = HAL_GetTick();
        }
        break;
      case MOVE_LEFT:
        if(left_sensor) 
        {
          obj_state = STAT_LEFT; 
          msg.dir = 0;   
          end_time = HAL_GetTick();
          msg.measure = (float)(end_time - start_time) / 1000.0f;
          osMessageQueuePut(MsgQueue, &msg, 0, 100);
        }
        if(right_sensor) 
        {
          obj_state = STAT_RIGHT; 
          msg.dir = 1;   
          end_time = HAL_GetTick();
          msg.measure = (float)(end_time - start_time) / 1000.0f;
          osMessageQueuePut(MsgQueue, &msg, 0, 100);
        }
        break;
      default:
        break;
      }
      
      //cnt += 0.001f;
      //DataStruct_t msg = {0, cnt};
      //osMessageQueuePut(MsgQueue, &msg, 0, 100);
    }
    HAL_Delay(1);
  }
}

