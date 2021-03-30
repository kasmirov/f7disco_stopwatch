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


void Screen1View::textCurDirUpdated(const char* textAreaBuffer)
{
    static touchgfx::Unicode::UnicodeChar buf[5];

    Unicode::snprintf(buf, 2, "%s", textAreaBuffer);

    Unicode::UnicodeChar buffer[20];
    Unicode::snprintfFloat(buffer, 20, "%6.4f", 3.14159f);

    textCurDir.setWildcard((touchgfx::Unicode::UnicodeChar*)textAreaBuffer);
    //textCurDir.setWildcard(buffer);
    textCurDir.invalidate();
}
