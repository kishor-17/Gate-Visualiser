#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
class Wire;
class Gate;
class Circuit;
class Input
{
    private:
        int value;
        bool state_of_connection_to_other_gates;
        bool state_of_containing_values;
    public:
        int get_value();
        void set_value(int _value);
        bool state_of_value;
        friend class Wire;
        friend class Gate;
        friend class Circuit;
};



#endif // INPUT_H_INCLUDED
