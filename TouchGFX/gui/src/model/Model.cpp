#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

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
		modelListener->timeMeasureReceived(j % 2, 10.012345f);
		j++;
	}

	i++;
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
