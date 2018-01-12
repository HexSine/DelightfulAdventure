#ifndef ITEM_H
#define ITEM_H


class Item
{
    public:
        Item(int id);
        virtual ~Item();
    protected:

    private:
        int m_id;
};

#endif // ITEM_H
