#pragma once
class Manual :public Car
{
public:
    string type;
    Manual(string type, string make, string model, short year)
        :Car(make, model, year)
    {
        this->type = type;
    }
    void speed()override
    {
        cout << "My speed is higher";
    }

    int pedalCount()override
    {
        return 3;
    }

    void print()override
    {
        cout << "Model: " << type << endl;
        cout << "Make: " << make << endl
            << "Model: " << model << endl
            << "Year: " << year << endl;
        cout << "Speed: ";
        speed();
        cout << endl;
        cout << "Pedal count: " << pedalCount() << endl;
    }
};