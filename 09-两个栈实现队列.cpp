class CQueue
{
public:
    CQueue()
    {
    }

    void appendTail(int value)
    {
        sta1.push(value);
    }

    int deleteHead()
    {
        int temp = 0;
        //若sta2中仍有元素,则直接弹出
        if (!sta2.empty())
        {
            temp = sta2.top();
            sta2.pop();
            return temp;
        }
        //若sta2空,则先压入sta2,再弹出
        else
        {
            while (!sta1.empty())
            {
                sta2.push(sta1.top());
                sta1.pop();
            }
            if (!sta2.empty())
            {
                temp = sta2.top();
                sta2.pop();
                return temp;
            }
            //若sta2仍为空，则说明sta1中没有元素弹入sta2，此时sta1和sta2中都没有元素,返回-1
            return -1;
        }
    }

private:
    stack<int> sta1;
    stack<int> sta2;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */