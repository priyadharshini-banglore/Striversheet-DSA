class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer>maxheap = new PriorityQueue<>(Collections.reverseOrder());
        for(Integer i : nums){
            maxheap.offer(i);
        }
        while(k>1){
            maxheap.poll();
            k--;
        }
        return maxheap.peek();
    }
}