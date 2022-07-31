/*
 * Author: Alejandro Valencia
 * Project: LeetCode Problems
 * Update: 30 July, 2022
 */

#include "01-Add-Two-Numbers/src/add_two_numbers.h"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
  ListNode *new_node{};
  const auto value = l1->val + l2->val;

  new_node->val = value;
  new_node->next = nullptr;
  l2->next = new_node;

  return new_node;
}