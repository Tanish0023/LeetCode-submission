class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int ans;
        switch(ruleKey){
            case "type":
                ans = 0;
                break;
            case "color":
                ans = 1;
                break;
            default:
                ans = 2;
                break;
        }

        int count = 0;
        for(int i = 0; i < items.size(); i++){
            if(items.get(i).get(ans).equals(ruleValue)){
                count++;
            }
        }

        return count;
    }
}