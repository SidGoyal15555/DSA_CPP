import java.util.*;
public class LearnSet {
    // Set ke aandar duplicate elements allow nhi hote hain
    //order is not defined so its like a bag so randomely print honge elements
    //bcoz eske aandar hashing chalti hai internally

    public static void main(String[] args) {
        Set<Integer> s = new HashSet<>();//all opertaion in O(1)
        s.add(32);
        s.add(2);
        s.add(54);
        s.add(21);
        s.add(65);
        System.out.println(s);
        s.remove(54);
        System.out.println(s);
        System.out.println(s.contains(2));
        System.out.println(s.isEmpty());
        System.out.println(s.size());
        s.clear();
        System.out.println(s.size());
        
        //Linked hash set mai order maintained reheta hai
        
        Set<Integer> s1 = new LinkedHashSet<>();
        s1.add(32);
        s1.add(2);
        s1.add(54);
        s1.add(21);
        s1.add(65);
        s1.add(65);
        System.out.println("LinkedHashSet");
        System.out.println(s1);
       /* s1.remove(54);
        System.out.println(s1);
        System.out.println(s1.contains(2));
        System.out.println(s1.isEmpty());
        System.out.println(s1.size());
        s1.clear();
        System.out.println(s1.size());
        */

        //TreeSet behond the seen sorted form mai karta hai kaam
        //it is internally implemetd by binary search tree that why it is in sorted form
        Set<Integer> s2 = new TreeSet<>();//all Operations in O(log(n))
        s2.add(32);
        s2.add(2);
        s2.add(54);
        s2.add(21);
        s2.add(65);
        s2.add(65);
        System.out.println("TreeSet");
        System.out.println(s2);

    }
}
