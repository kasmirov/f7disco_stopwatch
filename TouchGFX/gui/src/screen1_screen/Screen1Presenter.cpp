#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>



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

void Screen1Presenter::touchLeftBtnClicked()
{
    model->touchLeftBtnClicked();
}

void Screen1Presenter::touchRightBtnClicked()
{
    model->touchRightBtnClicked();
}


void Screen1Presenter::timeMeasureReceived(int dir, float time)
{
    // Добавить реализацию отображения результата, сбора статистики, добавления в лог
    view.textCurDirUpdated(dir == 0 ? "<<" : ">>");
    view.textCurTimerUpdated(time);
    view.addToList(dir == 0 ? "<<" : ">>", time);
}

void Screen1Presenter::leftPositionReached(bool state)
{

}

void Screen1Presenter::rightPositionReached(bool state)
{

}
