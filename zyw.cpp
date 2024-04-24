#include <iostream>
#include <queue>
#include <vector>
#define N 5000
using namespace std;
vector<int> get_order(const int numCourses, vector<vector<int> >& prerequisites) {
    //拓扑排序。 以入度为0的点，为起点。
    vector<int> Graph[N];
    vector<int> indegree(numCourses, 0);
    //求出入度(存入入度)
    for (auto a : prerequisites) {//初始化
        indegree[a[0]]++;
        Graph[a[1]].push_back(a[0]);
        //学习课程a[0]之前，需要完成课程a[1]的学习，所以a[1]是前趋顶点，a[0]是后继顶点
    }
    queue<int> Q;
    //找到入度为0的点先进队列 根据拓扑排序的性质所决定
    for (int i = 0; i < numCourses; i++)
    {
        if (indegree[i] == 0)
            Q.push(i);
    }

    vector<int> ans;//返回选修课程的顺序
    while (!Q.empty()) {

        //出队 并且加入到选课顺序
        int now = Q.front();
        Q.pop();
        ans.push_back(now);

        //当一个点被遍历后 相应的减少当前取消的点所指向的点的入队 列如本题3->2 和 3->1 当前1 2两点入度
        //均为1 当遍历了3之后 1 2两点的入队为0
        for (int i = 0; i < Graph[now].size(); i++) {
            indegree[Graph[now][i]]--;
            if (indegree[Graph[now][i]] == 0)
                Q.push(Graph[now][i]);
        }
    }
    //若拓扑排序完之后 选修课程顺序数量小于课程总数 返回空序列
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
        // 每次要清空临时vector
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