#include <gui/screen1_screen/Screen1View.hpp>
#include <typeinfo>
#include <string>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    scrollList1.removeAll();
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
    static int ctr = 1;
    CustomContainer1 listElement;
    listElement.setupListElement(1, ">", 12.345f);
    /*
    Drawable *obj = listElement.getFirstChild();
    while (obj != 0)
    {
        touchgfx::TextAreaWithOneWildcard* obj2 = dynamic_cast<touchgfx::TextAreaWithOneWildcard*> (obj);
        std::string s = typeid(obj2).name();
        if (s == "touchgfx::TextAreaWithOneWildcard")
        {

        }
            //((touchgfx::TextAreaWithOneWildcard *)obj)->
        obj = listElement.getNextSibling();
    }
    */
    ctr++;
}
