#pragma once
class Car
{
protected:
    string make;
    string model;
    short year;

    Car(string make, string model, short year)
        :make(make), model(model), year(year)
    {}
public:
    virtual void speed()
    {
        cout << "";
    }

    virtual int pedalCount()
    {
        return 0;
    }

    virtual void print()
    {
        cout << "Make: " << make << endl
            << "Model: " << model << endl
            << "Year: " << year << endl;
        cout << "Speed: " << endl;
        speed();
        cout << "Pedal count: " << pedalCount() << endl;
    }
};
