
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int ch, bn, ich;
    string tmp;
    vector<string> bname, ah, time;
    while (true)
    {
        cout << "請選擇你所需要的功能(1.新增圖書 2.刪除圖書 3.找查圖書 4.更新圖書資料 5.顯示圖書列表 6.中止程式):";
        cin >> ch;
        if (ch == 1)
        {
            cout << "請輸入要新增的書名:";
            cin >> tmp;
            bname.push_back(tmp);
            cout << "請輸入此書的作者:";
            cin >> tmp;
            ah.push_back(tmp);
            cout << "請輸入此書的出版日期(格式為12/2):";
            cin >> tmp;
            time.push_back(tmp);
        }
        else if (ch == 2)
        {
            cout << "請選擇搜尋方式(1.以編號 2.以書名):";
            cin >> ich;
            if (ich == 1)
            {
                int min = 0, max = (int)bname.size();
                int target1;
                cout << "請輸入此書的編號:";
                cin >> target1;
                target1 = target1 - 1;
                while (true)
                {
                    int middle = (min + max) / 2;
                    if (middle == target1)
                    {
                        bname.erase(bname.begin() + target1);
                        ah.erase(ah.begin() + target1);
                        time.erase(time.begin() + target1);
                        cout << "(已刪除此書)" << endl;
                        break;
                    }
                    else if (middle > target1)
                    {
                        max = middle;
                    }
                    else
                    {
                        min = middle;
                    }
                }
            }
            else
            {
                string target2;
                cout << "請輸入此書的書名:";
                cin >> target2;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target2)
                    {
                        bname.erase(bname.begin() + i);
                        ah.erase(ah.begin() + i);
                        time.erase(time.begin() + i);
                        cout << "(已刪除此書)" << endl;
                        break;
                    }
                }
            }
        }
        else if (ch == 3)
        {
            cout << "請選擇搜尋方式(1.編號 2.書名 3.作者 4.出版時間):";
            cin >> ich;
            if (ich == 1)
            {
                int min = 0, max = (int)bname.size();
                int Target;
                cout << "請輸入此書的編號:";
                cin >> Target;
                while (true)
                {
                    int middle = (min + max) / 2;
                    if (middle == Target)
                    {
                        cout << "編號\t書名\t作者\t出版日期" << endl;
                        cout << Target << "\t" << bname[Target] << "\t" << ah[Target] << "\t" << time[Target] << endl;
                        break;
                    }
                    else if (middle > Target)
                    {
                        max = middle;
                    }
                    else
                    {
                        min = middle;
                    }
                }
            }
            else if (ich == 2)
            {
                string target;
                cout << "請輸入此書的書名:";
                cin >> target;
                cout << "編號\t書名\t作者\t出版日期" << endl;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target)
                    {
                        cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
            else if (ich == 3)
            {
                string target;
                cout << "請輸入此書的作者:";
                cin >> target;
                cout << "編號\t書名\t作者\t出版日期" << endl;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (ah[i] == target)
                    {
                        cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
            else if (ich == 4)
            {
                string target;
                cout << "請輸入此書的出版日期:";
                cin >> target;
                cout << "編號\t書名\t作者\t出版日期" << endl;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target)
                    {
                        cout << i + 1 << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
        }
        else if (ch == 4)
        {
            cout << "請選擇搜尋方式(1.編號 2.書名):";
            cin >> ich;
            if (ich == 1)
            {
                int min = 0, max = (int)bname.size();
                int target;
                string tmp1;
                cout << "請輸入此書的編號:";
                cin >> target;
                target = target - 1;
                while (true)
                {
                    int middle = (min + max) / 2;
                    if (middle == target)
                    {
                        int uch;
                        cout << "請選擇要修改的部分(1.書名 2.作者 3.出版日期)";
                        cin >> uch;
                        if (uch == 1)
                        {
                            cout << "請輸入新的書名:";
                            cin >> tmp1;
                            bname.erase(bname.begin() + target);
                            bname.insert(bname.begin() + target, tmp1);
                        }
                        else if (uch == 2)
                        {
                            cout << "請輸入新的作者:";
                            cin >> tmp1;
                            ah.erase(bname.begin() + target);
                            ah.insert(bname.begin() + target, tmp1);
                        }
                        else if (uch == 3)
                        {
                            cout << "請輸入新的出版日期(格式:12/2):";
                            cin >> tmp1;
                            time.erase(bname.begin() + target);
                            time.insert(bname.begin() + target, tmp1);
                        }
                        cout << "編號\t書名\t作者\t出版日期" << endl;
                        cout << target << "\t" << bname[target] << "\t" << ah[target] << "\t" << time[target] << endl;
                        break;
                    }
                    else if (middle > target)
                    {
                        max = middle;
                    }
                    else
                    {
                        min = middle;
                    }
                }
            }
            else if (ich == 2)
            {
                string target, tmp1;
                cout << "請輸入此書的書名:";
                cin >> target;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target)
                    {
                        int uch;
                        cout << "請選擇要修改的部分(1.書名 2.作者 3.出版日期)";
                        cin >> uch;
                        if (uch == 1)
                        {
                            cout << "請輸入新的書名:";
                            cin >> tmp1;
                            bname.erase(bname.begin() + i);
                            bname.insert(bname.begin() + i, tmp1);
                        }
                        else if (uch == 2)
                        {
                            cout << "請輸入新的作者:";
                            cin >> tmp1;
                            ah.erase(ah.begin() + i);
                            ah.insert(bname.begin() + i, tmp1);
                        }
                        else if (uch == 3)
                        {
                            cout << "請輸入新的出版日期(格式:12/2):";
                            cin >> tmp1;
                            time.erase(time.begin() + i);
                            time.insert(bname.begin() + i, tmp1);
                        }
                        cout << "編號\t書名\t作者\t出版日期" << endl;
                        cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
        }
        else if (ch == 5)
        {
            cout << "編號\t書名\t作者\t出版日期" << endl;
            for (int i = 0; i < (int)bname.size(); i++)
            {
                cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
            }
        }
        else if (ch == 6)
        {
            break;
        }
    }
    return 0;
}
