//#define _CRT_SECURE_NO_WARNINGS
//#include<vector>
////�������
//using namespace std;
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//
//        queue<TreeNode*> q;
//        int levesize = 0;//ÿһ��ĸ���
//        if (root)
//        {
//            q.push(root);
//            levesize = 1;
//        }
//        vector<vector<int>> vv;//����ÿһ�������
//        while (!q.empty())
//        {
//            vector<int> v;
//            while (levesize--)
//            {
//                TreeNode* front = q.front();
//                q.pop();//ȡ�����ڵ㣬�����ӽڵ�
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
//            levesize = q.size();//��һ������ݸ���
//        }
//        return vv;
//    }
//};