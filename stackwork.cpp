//#define _CRT_SECURE_NO_WARNINGS
//#include<vector>
////层序遍历
//using namespace std;
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//
//        queue<TreeNode*> q;
//        int levesize = 0;//每一层的个数
//        if (root)
//        {
//            q.push(root);
//            levesize = 1;
//        }
//        vector<vector<int>> vv;//储存每一层的数据
//        while (!q.empty())
//        {
//            vector<int> v;
//            while (levesize--)
//            {
//                TreeNode* front = q.front();
//                q.pop();//取出根节点，放入子节点
//                v.push_back(front->val);
//                if (front->left)
//                {
//                    q.push(front->left);
//                }
//                if (front->right)
//                {
//                    q.push(front->right);
//                }
//
//            }
//            vv.push_back(v);
//            levesize = q.size();//下一层的数据个数
//        }
//        return vv;
//    }
//};

//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//
//        priority_queue<int> pq(nums.begin(), nums.end());
//        for (int i = 1;i < k;i++)
//        {
//            pq.pop();
//        }
//        return pq.top();
//    }
//};