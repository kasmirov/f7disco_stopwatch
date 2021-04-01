#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "data_struct.h"
#include "cmsis_os.h"

extern osMessageQueueId_t MsgQueue;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
      // Test code, remove later
      static int i = 0;
      static int j = 0;
      if ((i % 60) == 0)
      {
              modelListener->timeMeasureReceived(j % 2, 1.012345f);
              j++;
      }

      i++;
      
      // Work code
      DataStruct_t msg;
      
      if (osMessageQueueGet(MsgQueue, &msg, NULL, 10U) == osOK)
      {
          modelListener->timeMeasureReceived(msg.dir, msg.measure);          
      }
 
}

void Model::startMeasure()
{

}

void Model::stopMeasure()
{
}

void Model::touchLeftBtnClicked()
{
}

void Model::touchRightBtnClicked()
{
}
