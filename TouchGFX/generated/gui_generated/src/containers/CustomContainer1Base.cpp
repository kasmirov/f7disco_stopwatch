/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

CustomContainer1Base::CustomContainer1Base()
{
    setWidth(250);
    setHeight(25);
    textNum.setPosition(0, 0, 65, 25);
    textNum.setColor(touchgfx::Color::getColorFrom24BitRGB(64, 119, 255));
    textNum.setLinespacing(0);
    Unicode::snprintf(textNumBuffer, TEXTNUM_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID32).getText());
    textNum.setWildcard(textNumBuffer);
    textNum.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));

    textDir.setPosition(70, 0, 35, 25);
    textDir.setColor(touchgfx::Color::getColorFrom24BitRGB(64, 119, 255));
    textDir.setLinespacing(0);
    Unicode::snprintf(textDirBuffer, TEXTDIR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID33).getText());
    textDir.setWildcard(textDirBuffer);
    textDir.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4));

    textTime.setPosition(110, 0, 110, 25);
    textTime.setColor(touchgfx::Color::getColorFrom24BitRGB(64, 119, 255));
    textTime.setLinespacing(0);
    textTimeBuffer[0] = 0;
    textTime.setWildcard(textTimeBuffer);
    textTime.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));

    line1.setPosition(0, 22, 250, 2);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(86, 86, 87));
    line1.setPainter(line1Painter);
    line1.setStart(1, 1);
    line1.setEnd(230, 1);
    line1.setLineWidth(2);
    line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    add(textNum);
    add(textDir);
    add(textTime);
    add(line1);
}

void CustomContainer1Base::initialize()
{

}

