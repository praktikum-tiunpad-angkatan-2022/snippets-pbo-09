import java.util.Set;
import java.util.TreeSet;

public class TreeSetExample {
    public static void main(String[] args) {
        Set<String> ts = new TreeSet<String>();
        ts.add("one");
        ts.add("two");
        ts.add("three");
        ts.add("four");
        ts.add("five");

        System.out.println(ts);

        Set<Integer> ts2 = new TreeSet<Integer>();
        ts2.add(1);
        ts2.add(4);
        ts2.add(2);
        ts2.add(2);
        ts2.add(3);

        System.out.println(ts2);
    }
}

