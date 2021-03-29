#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::startBtnClicked()
{
    presenter->startTimer();
}

void Screen1View::stopBtnClicked()
{
    presenter->stopTimer();
}

void Screen1View::leftBtnClicked()
{
    presenter->touchLeftBtnClicked();
}

void Screen1View::rightBtnClicked()
{
    presenter->touchRightBtnClicked();
}

void Screen1View::textCurDirUpdated(touchgfx::Unicode::UnicodeChar* textAreaBuffer, int len)
{
    //textCurDir.setWildcard(textAreaBuffer); TextAreaWithOneWildcard
    textCurDir.invalidate();
    //TextAreaWithOneWildcard
}
