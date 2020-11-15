#include "iterator.hpp"

UnaryIterator::UnaryIterator(Base* ptr) : Iterator(ptr) {
    this->c = left;
}

void UnaryIterator::first() { 
    this->c = left; 
}
void UnaryIterator::next() {
    if(this->c == left) {
        this->c = end;
    }
    this->c = end;
}
bool UnaryIterator::is_done() { 
    if(this->c == end) {
        return true;
    }
    return false;
}
Base* UnaryIterator::current() { 
    if(this->c == left) {
        return this->self_ptr->get_left();
    }
    return nullptr;
}
