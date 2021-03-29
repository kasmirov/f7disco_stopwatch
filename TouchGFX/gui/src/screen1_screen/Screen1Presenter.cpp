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
    static const uint16_t TEXTAREA_SIZE = 20;
    touchgfx::Unicode::UnicodeChar buf[TEXTAREA_SIZE];

    // �������� ���������� ����������� ����������, ����� ����������, ���������� � ���
    if (dir == 0)
    {
        Unicode::snprintf(buf, TEXTAREA_SIZE, "%s", "<");
        view.textCurDirUpdated(buf, 1);
    }
    else
    {
        Unicode::snprintf(buf, TEXTAREA_SIZE, "%s", ">");
        view.textCurDirUpdated(buf, 1);
    }
}
