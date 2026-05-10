#ifndef RIM_HPP
#define RIM_HPP

class RIM {
    public:
        void change_tension(int a, int b, int c);
        void print_tension();

        int get_tension_1();
        int get_tension_2();
        int get_tension_3();


    private:
        int t_1 = 0;
        int t_2 = 0;
        int t_3 = 0;
};



#endif