/**
 * sine_array_generator
 */
import java.lang.Math.*;

public class sine_array_generator {

    public static void main(String[] args) {
        
        int arrayLength = 8;        //should be divisible by 4 to get peaks
        int maxValue = 255;        //2^(number of bits the DAC has) - 1 


        int valOffset = (maxValue + 1) / 2;
        int valAmplitude = (valOffset - 1);

        int val = 0;

        System.out.print("byte sineValues[] = {");
        val = valOffset;
        System.out.print(val);
        for (int i = 1; i < arrayLength; i++) {
            System.out.print(", ");
            val = (int) Math.round((valOffset + (valAmplitude * Math.sin((2* Math.PI * i)/arrayLength))));
            System.out.print(val);
          }
        System.out.println("};");
    }
}
