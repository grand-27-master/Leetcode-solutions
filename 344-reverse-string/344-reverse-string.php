class Solution {

    /**
     * @param String[] $s
     * @return NULL
     */
    function reverseString(&$s) {
       $i = 0;
        $j = count($s) - 1;

        while ($j>$i) {
            [$s[$i], $s[$j]] = [$s[$j], $s[$i]];
            $i += 1;
            $j -= 1;
        }
    }
}