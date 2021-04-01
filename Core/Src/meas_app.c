#include "meas_app.h"
#include "data_struct.h"
#include "cmsis_os.h"

extern osMessageQueueId_t MsgQueue;

void Meas_Process()
{
  
  float cnt = 0.001f;
  while(1)
  {
    cnt += 0.001f;
    DataStruct_t msg = {0, cnt};
    osMessageQueuePut(MsgQueue, &msg, 0, 100);
    HAL_Delay(500);
  }
}

