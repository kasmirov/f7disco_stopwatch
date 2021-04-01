#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "data_struct.h"
#include "cmsis_os.h"

extern osMessageQueueId_t MsgQueue;
extern MeasState_t meas_state;
  
Model::Model() : modelListener(0)
{

}

void Model::tick()
{

#ifndef SIMULATOR      
      // Work code
      DataStruct_t msg;
      
      if (osMessageQueueGet(MsgQueue, &msg, NULL, 10U) == osOK)
      {
          modelListener->timeMeasureReceived(msg.dir, msg.measure);          
      }
#else
      // Test code, remove later
      static int i = 0;
      static int j = 0;
      if ((i % 60) == 0)
      {
              modelListener->timeMeasureReceived(j % 2, 1.012345f);
              j++;
      }

      i++;
#endif 
}

void Model::startMeasure()
{
  meas_state = MEAS_ON;
}

void Model::stopMeasure()
{
  meas_state = MEAS_OFF;
}

void Model::touchLeftBtnClicked()
{
}

void Model::touchRightBtnClicked()
{
}
