#include <iostream>
#include <queue>
#include <vector>
#define N 5000
using namespace std;
vector<int> get_order(const int numCourses, vector<vector<int> >& prerequisites) {
    //�������� �����Ϊ0�ĵ㣬Ϊ��㡣
    vector<int> Graph[N];
    vector<int> indegree(numCourses, 0);
    //������(�������)
    for (auto a : prerequisites) {//��ʼ��
        indegree[a[0]]++;
        Graph[a[1]].push_back(a[0]);
        //ѧϰ�γ�a[0]֮ǰ����Ҫ��ɿγ�a[1]��ѧϰ������a[1]��ǰ�����㣬a[0]�Ǻ�̶���
    }
    queue<int> Q;
    //�ҵ����Ϊ0�ĵ��Ƚ����� �����������������������
    for (int i = 0; i < numCourses; i++)
    {
        if (indegree[i] == 0)
            Q.push(i);
    }

    vector<int> ans;//����ѡ�޿γ̵�˳��
    while (!Q.empty()) {

        //���� ���Ҽ��뵽ѡ��˳��
        int now = Q.front();
        Q.pop();
        ans.push_back(now);

        //��һ���㱻������ ��Ӧ�ļ��ٵ�ǰȡ���ĵ���ָ��ĵ����� ���籾��3->2 �� 3->1 ��ǰ1 2�������
        //��Ϊ1 ��������3֮�� 1 2��������Ϊ0
        for (int i = 0; i < Graph[now].size(); i++) {
            indegree[Graph[now][i]]--;
            if (indegree[Graph[now][i]] == 0)
                Q.push(Graph[now][i]);
        }
    }
    //������������֮�� ѡ�޿γ�˳������С�ڿγ����� ���ؿ�����
    if (ans.size() != numCourses) return {};
    return ans;
}
int main()
{
    int numCourses = 0;
    cin >> numCourses;
    vector<vector<int>> prerequisites;
    vector<int > tmp;
    int a;
    for (int i = 0; i < numCourses; ++i) {
        tmp.clear();
        // ÿ��Ҫ�����ʱvector
        for (int j = 0; j < 2; ++j) {
            cin >> a;
            tmp.push_back(a);
        }
        prerequisites.push_back(tmp);
    }
    vector<int> ans = get_order(numCourses, prerequisites);


    //print
    cout << "[";
    for (vector<int>::iterator a = ans.begin(); a != ans.end(); a++) {
        if (a != ans.end() - 1)
            cout << *a << ",";
        else
            cout << *a;
    }
    cout << "]";
}