/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.app.entry;

import tr.havelsan.ueransim.app.app.AppBuilder;
import tr.havelsan.ueransim.app.app.ProcedureTester;
import tr.havelsan.ueransim.utils.console.Console;
import tr.havelsan.ueransim.utils.jcolor.AnsiPalette;

import java.util.Scanner;

public class AgentApp {

    private ProcedureTester procTester;

    public static void main(String[] args) {
        BaseApp.main(args);
        new AgentApp().main();
    }

    private void main() {
        procTester = new ProcedureTester();

        var ueransim = new AppBuilder()
                .addConnectionListener(procTester)
                .addMessagingListener(procTester)
                .build();

        procTester.start(ueransim, 3, this::onTesterInit);
    }

    private void onTesterInit() {
        Console.println(AnsiPalette.PAINT_DIVIDER, "-----------------------------------------------------------------------------");

        var testCases = procTester.testCases();

        Console.println(AnsiPalette.PAINT_INPUT, "List of pre-defined procedure tests:");
        for (int i = 0; i < testCases.length; i++) {
            Console.print(AnsiPalette.PAINT_INPUT, (i + 1) + ") ");
            Console.println(null, testCases[i]);
        }

        Console.println(AnsiPalette.PAINT_INPUT, "Selection: ");

        var scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) {
            String line = scanner.nextLine();

            int number = -1;
            try {
                number = Integer.parseInt(line);
            } catch (Exception ignored) {
            }

            if (number < 1 || number > testCases.length) {
                System.err.println("Invalid selection: " + number);
                continue;
            }

            procTester.startTestCase(testCases[number - 1]);
        }
    }
}
