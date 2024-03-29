// Intersection Of Linked List [Leetcode-160]
// Given the heads of two singly linked - lists headA and headB, return the node at which the two lists intersect.If the two linked lists have no intersection at all, return null.

// class Solution
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {
//         ListNode *a = headA;
//         ListNode *b = headB;

//         // Both node start at same point
//         while (a->next && b->next)
//         {
//             if (a == b)
//             {
//                 return a;
//             }
//             a = a->next;
//             b = b->next;
//         }

//         if (a->next == 0 && b->next == 0 && a != b)
//             return 0;

//         if (a->next == 0)
//         {
//             // B is bigger ya equal he
//             // We need to find out how mush bigger it is
//             int blen = 0;
//             while (b->next)
//             {
//                 blen++;
//                 b = b->next;
//             }
//             while (blen--)
//             {
//                 headB = headB->next;
//             }
//         }
//         else
//         {
//             // A is bigger
//             // We need to find out how mush bigger it is
//             int alen = 0;
//             while (a->next)
//             {
//                 alen++;
//                 a = a->next;
//             }
//             while (alen--)
//             {
//                 headA = headA->next;
//             }
//         }

//         while (headA != headB)
//         {
//             headA = headA->next;
//             headB = headB->next;
//         }
//         return headA;
//     }
// };