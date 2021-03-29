/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/scrollers/ScrollList.hpp>
#include <gui/containers/CustomContainer1.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/mixins/ClickListener.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

    virtual void scrollList1UpdateItem(CustomContainer1& item, int16_t itemIndex)
    {
        // Override and implement this function in Screen1
    }

    /*
     * Virtual Action Handlers
     */
    virtual void startBtnClicked()
    {
        // Override and implement this function in Screen1
    }

    virtual void stopBtnClicked()
    {
        // Override and implement this function in Screen1
    }

    virtual void leftBtnClicked()
    {
        // Override and implement this function in Screen1
    }

    virtual void rightBtnClicked()
    {
        // Override and implement this function in Screen1
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ClickListener< touchgfx::ButtonWithLabel > startButton;
    touchgfx::ButtonWithLabel stopButton;
    touchgfx::ScrollList scrollList1;
    touchgfx::DrawableListItems<CustomContainer1, 10> scrollList1ListItems;
    touchgfx::TextAreaWithOneWildcard textCurDir;
    touchgfx::TextArea textCurTimer;
    touchgfx::TextArea textStatistic;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextArea textArea1_2;
    touchgfx::TextArea textArea1_3;
    touchgfx::TextArea textStatLeftMin;
    touchgfx::TextArea textStatLeftMax;
    touchgfx::TextArea textStatLeftMean;
    touchgfx::TextArea textStatLeftStd;
    touchgfx::TextArea textStatRightMin;
    touchgfx::TextArea textStatRightMax;
    touchgfx::TextArea textStatRightMean;
    touchgfx::TextArea textStatRightStd;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > leftButton;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > rightButton;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;
    touchgfx::Callback<Screen1ViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN1VIEWBASE_HPP
