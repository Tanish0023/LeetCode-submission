class Solution {
    public boolean checkIfPangram(String sentence) {        
        for(int i = 97; i <= 122; i++){
            char c = (char) i;

            if(!sentence.contains(Character.toString(c))){
                return false;
            }
        }

        return true;
    }
}