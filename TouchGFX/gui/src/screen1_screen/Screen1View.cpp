#include <gui/screen1_screen/Screen1View.hpp>
#include <typeinfo>
#include <string>
#include <gui/containers/CustomContainer1.hpp>


Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    //scrollList1.removeAll();
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


void Screen1View::textCurDirUpdated(const char* dir)
{
    // Unicode::UnicodeChar buffer[20];
    // Unicode::snprintfFloat(buffer, 20, "%6.4f", 3.14159f);
    Unicode::strncpy(textCurDirBuffer, dir, TEXTCURDIR_SIZE);
    //textCurDir.setWildcard((touchgfx::Unicode::UnicodeChar*)textAreaBuffer);
    textCurDir.invalidate();
}

void Screen1View::textCurTimerUpdated(float time)
{
    //Unicode::UnicodeChar buffer[20];
    Unicode::snprintfFloat(textCurTimerBuffer, 20, "%2.6f", time);
    //textCurTimer.setWildcard(buffer);
    textCurTimer.invalidate();
}

void Screen1View::addToList(const char* dir, float time)
{
    static int cnt = 0;
  
    scrollList1ListItems[cnt % 10].setupListElement(cnt + 1, dir, time);
    scrollList1.invalidate();
    cnt++;
}
