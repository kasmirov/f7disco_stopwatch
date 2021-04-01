#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    void startMeasure();
    void stopMeasure();
    void touchLeftBtnClicked();
    void touchRightBtnClicked();
    void meas_taskEntry();
    
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
