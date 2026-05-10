#ifndef rim_hpp
#define rim_hpp

class RIM {
    public:
        RIM();
        void change_tension(int a, int b, int c);
        void print_tension();


    private:
        int t_1 = 0;
        int t_2 = 0;
        int t_3 = 0;
};



#endif