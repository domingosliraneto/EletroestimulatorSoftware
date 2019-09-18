#ifndef MEASUREMENTADJUSTMENT_H
#define MEASUREMENTADJUSTMENT_H


class MeasurementAdjustment
{
public:
    MeasurementAdjustment(){}
    void setMaxOutput(double xmax){this->xmax=xmax;}
    void setMinOutput(double xmin){this->xmin=xmin;}
    void setMaxInput(double ymax){this->ymax=ymax;}
    void setMinInput(double ymin){this->ymin=ymin;}
    double rescale(double y){return ((y-ymin)/(ymax-ymin))*(xmax-xmin)+xmin;}
private:
    double xmax, xmin, ymax, ymin;
};

#endif // MEASUREMENTADJUSTMENT_H
