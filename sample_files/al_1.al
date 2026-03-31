codeunit 6175305 "CDO Issue Document"
{
    // C/SIDE
    // revision:5


    trigger OnRun()
    begin
    end;

    procedure IssueReminder(ReminderHeader: Record "Reminder Header")
    var
        IssuedReminderHeader: Record "Issued Reminder Header";
        DocumentOutput: Codeunit "CDO E-Mail Handler";
        ReminderIssue: Codeunit "Reminder-Issue";
    begin
        ReminderHeader.SETRECFILTER;
        ReminderIssue.Set(ReminderHeader, false, 0D);
        ReminderIssue.RUN;

        ReminderIssue.GetIssuedReminder(IssuedReminderHeader);
        IssuedReminderHeader.SETRECFILTER;
        DocumentOutput.DocHandle(false, IssuedReminderHeader, IssuedReminderHeader.FIELDNO("Language Code"), IssuedReminderHeader.GETVIEW(true));
    end;

    procedure IssueFinanceChargeMemo(FinanceChargeMemoHeader: Record "Finance Charge Memo Header")
    var
        IssuedFinChargeMemoHeader: Record "Issued Fin. Charge Memo Header";
        DocumentOutput: Codeunit "CDO E-Mail Handler";
        FinChrgMemoIssue: Codeunit "FinChrgMemo-Issue";
    begin
        FinanceChargeMemoHeader.SETRECFILTER;
        FinChrgMemoIssue.Set(FinanceChargeMemoHeader, false, 0D);
        FinChrgMemoIssue.RUN;

        FinChrgMemoIssue.GetIssuedFinChrgMemo(IssuedFinChargeMemoHeader);
        IssuedFinChargeMemoHeader.SETRECFILTER;
        DocumentOutput.DocHandle(false, IssuedFinChargeMemoHeader, IssuedFinChargeMemoHeader.FIELDNO("Language Code"), IssuedFinChargeMemoHeader.GETVIEW(true));
    end;
}
