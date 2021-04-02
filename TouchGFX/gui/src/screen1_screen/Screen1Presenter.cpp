#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <cstdio>
#include <vector>
#include <ostream>
#include <iostream>
#include <cmath>

void calc_stat(std::vector <float> &arr, 
				float &min,
				float &max,
				float &mean,
				float &stdev)
{
	float sum = 0;
	
	for(auto v : arr)
    {
        std::cout << v << std::endl;
        min = min < v ? min : v;
        max = max > v ? max : v;
        sum += v;
    }
    mean = sum / (float)arr.size();

    
    for(auto v : arr)
    {
        stdev = pow(mean - v, 2);
    }
	stdev = sqrt(stdev);
}

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}

void Screen1Presenter::startTimer()
{
    model->startMeasure();
}

void Screen1Presenter::stopTimer()
{
    model->stopMeasure();
}


void Screen1Presenter::timeMeasureReceived(int dir, float time)
{
    static std::vector <float> left;
    static std::vector <float> right;
    
    // �������� ���������� ����������� ����������, ����� ����������, ���������� � ���
    view.textCurDirUpdated(dir == 0 ? "<<" : ">>");
    view.textCurTimerUpdated(time);
    view.addToList(dir == 0 ? "<<" : ">>", time);
    
    if (dir == 0)
    {
      left.push_back(time);
    }
    else 
    {
      right.push_back(time);
    }
    
    float l_min;
    float l_max;
    float l_mean;
    float l_stdev;
    float r_min;
    float r_max;
    float r_mean;
    float r_stdev;

    calc_stat(left, l_min, l_max, l_mean, l_stdev);
    calc_stat(left, r_min, r_max, r_mean, r_stdev);
    view.textUpdateStat(l_min, l_max, l_mean, l_stdev, r_min, r_max, r_mean, r_stdev);
}

void Screen1Presenter::leftPositionReached(bool state)
{

}

void Screen1Presenter::rightPositionReached(bool state)
{

}
