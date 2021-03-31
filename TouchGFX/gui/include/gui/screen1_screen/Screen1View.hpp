#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <gui/containers/CustomContainer1.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void startBtnClicked();
    virtual void stopBtnClicked();
    virtual void leftBtnClicked();
    virtual void rightBtnClicked();

    virtual void textCurDirUpdated(const char* dir);
    virtual void textCurTimerUpdated(float time);
    virtual void addToList(const char* dir, float time);

protected:

};

#endif // SCREEN1VIEW_HPP
