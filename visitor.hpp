#ifndef __COUNT_VISITOR_HPP__
#define __COUNT_VISITOR_HPP__

class CountVisitor{
    private:
        int ops;
        int rands;
        int mults;
        int divs;
        int add;
        int sub;
        int pow;
        
        int ceil;
        int floor;
        int abs;
        int trunc;
        int paren;

    public:
        CountVisitor();

        void visit_op();
        int op_count();
        void visit_rand();
        int rand_count();
        void visit_mult();
        int mult_count();
        void visit_div();
        int div_count();
        void visit_add();
        int add_count();
        void visit_sub();
        int sub_count();
        void visit_pow();
        int pow_count();

        void visit_ceil();
        int ceil_count();
        void visit_floor();
        int floor_count();
        void visit_abs();
        int abs_count();
        void visit_trunc();
        int trunc_count();
        void visit_paren();
        int paren_count();
};

#endif //__COUNT_VISITOR_HPP__
