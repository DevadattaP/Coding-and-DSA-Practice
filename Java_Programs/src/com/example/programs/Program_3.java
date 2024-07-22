package com.example.programs;

import java.util.ArrayList;
import java.util.List;

public class Program_3 {
    public static int[] rearrangeArray(int[] arr) {
        List<Integer> pos = new ArrayList<>();
        List<Integer> neg = new ArrayList<>();
        for (int num : arr) {
            if (num >= 0) {
                pos.add(num);
            } else {
                neg.add(num);
            }
        }
        int[] res = new int[arr.length];
        int i = 0;
        while (!pos.isEmpty() && !neg.isEmpty()) {
            res[i++] = neg.remove(0);
            res[i++] = pos.remove(0);
        }
        while (!pos.isEmpty()) {
            res[i++] = pos.remove(0);
        }
        while (!neg.isEmpty()) {
            res[i++] = neg.remove(0);
        }
        return res;
    }
}
