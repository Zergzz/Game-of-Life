object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'Form1'
  ClientHeight = 784
  ClientWidth = 1150
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  WindowState = wsMaximized
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Notebook1: TNotebook
    Left = 0
    Top = 0
    Width = 1150
    Height = 784
    Align = alClient
    PageIndex = 3
    TabOrder = 0
    object TPage
      Left = 0
      Top = 0
      Caption = 'Menu'
      object Image3: TImage
        Left = 0
        Top = 0
        Width = 1150
        Height = 784
        Align = alClient
        AutoSize = True
        Center = True
        ExplicitLeft = 144
        ExplicitTop = 16
      end
      object Panel1: TPanel
        AlignWithMargins = True
        Left = 603
        Top = 275
        Width = 177
        Height = 322
        TabOrder = 0
        object Button8: TButton
          Left = 56
          Top = 264
          Width = 75
          Height = 25
          Caption = #1042#1099#1093#1086#1076
          TabOrder = 0
          OnClick = Button8Click
        end
        object Button4: TButton
          Left = 54
          Top = 48
          Width = 75
          Height = 25
          Caption = #1048#1075#1088#1072#1090#1100
          TabOrder = 1
          OnClick = Button4Click
        end
        object Button5: TButton
          Left = 54
          Top = 107
          Width = 75
          Height = 25
          Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
          TabOrder = 2
          OnClick = Button5Click
        end
        object Button6: TButton
          Left = 54
          Top = 161
          Width = 75
          Height = 25
          Caption = #1057#1090#1072#1090#1080#1089#1090#1080#1082#1072
          TabOrder = 3
          OnClick = Button6Click
        end
        object Button7: TButton
          Left = 54
          Top = 216
          Width = 75
          Height = 25
          Caption = #1040#1074#1090#1086#1088
          TabOrder = 4
        end
      end
    end
    object TPage
      Left = 0
      Top = 0
      Caption = 'Default'
      object Image4: TImage
        Left = 0
        Top = 0
        Width = 1150
        Height = 784
        Align = alClient
        AutoSize = True
        Center = True
        ExplicitLeft = 328
        ExplicitTop = 280
        ExplicitWidth = 105
        ExplicitHeight = 105
      end
      object Image1: TImage
        AlignWithMargins = True
        Left = 348
        Top = 0
        Width = 802
        Height = 802
        Center = True
        OnMouseMove = Image1MouseMove
      end
      object Button1: TButton
        Left = 192
        Top = 216
        Width = 75
        Height = 25
        Caption = #1057#1090#1072#1088#1090
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 192
        Top = 280
        Width = 75
        Height = 25
        Caption = #1057#1090#1086#1087
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button3: TButton
        Left = 192
        Top = 336
        Width = 75
        Height = 25
        Caption = #1054#1095#1080#1089#1090#1080#1090#1100
        TabOrder = 2
        OnClick = Button3Click
      end
      object MediaPlayer1: TMediaPlayer
        Left = 480
        Top = 448
        Width = 253
        Height = 30
        DoubleBuffered = True
        Visible = False
        ParentDoubleBuffered = False
        TabOrder = 3
      end
      object Button9: TButton
        Left = 192
        Top = 392
        Width = 75
        Height = 25
        Caption = #1052#1077#1085#1102
        TabOrder = 4
        OnClick = Button9Click
      end
    end
    object TPage
      Left = 0
      Top = 0
      Caption = 'Options'
      object Image5: TImage
        Left = 0
        Top = 0
        Width = 1150
        Height = 784
        Align = alClient
        Center = True
        ExplicitLeft = 344
        ExplicitTop = 528
        ExplicitWidth = 105
        ExplicitHeight = 105
      end
      object Panel2: TPanel
        Left = 616
        Top = 272
        Width = 185
        Height = 305
        Color = clWhite
        ParentBackground = False
        TabOrder = 0
        object CheckBox1: TCheckBox
          Left = 40
          Top = 40
          Width = 97
          Height = 17
          ParentCustomHint = False
          Caption = #1063#1077#1096#1080#1088#1089#1082#1080#1081' '#1082#1086#1090
          Color = clWhite
          Ctl3D = True
          DoubleBuffered = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -11
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentColor = False
          ParentCtl3D = False
          ParentDoubleBuffered = False
          ParentFont = False
          ParentShowHint = False
          ShowHint = False
          TabOrder = 0
        end
        object Button10: TButton
          Left = 54
          Top = 264
          Width = 75
          Height = 25
          Caption = #1054#1050
          TabOrder = 1
          OnClick = Button10Click
        end
      end
    end
    object TPage
      Left = 0
      Top = 0
      Caption = 'S'
      object Image2: TImage
        Left = 0
        Top = 0
        Width = 1150
        Height = 784
        Align = alClient
        Center = True
        ExplicitLeft = 16
        ExplicitTop = 16
      end
      object Label1: TLabel
        Left = 472
        Top = 104
        Width = 141
        Height = 40
        Caption = #1056#1086#1076#1080#1083#1086#1089#1100
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clRed
        Font.Height = 40
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 472
        Top = 160
        Width = 111
        Height = 40
        Caption = #1059#1084#1077#1088#1083#1086
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clRed
        Font.Height = 40
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Button11: TButton
        Left = 656
        Top = 664
        Width = 75
        Height = 25
        Caption = #1047#1072#1082#1088#1099#1090#1100
        TabOrder = 0
        OnClick = Button11Click
      end
    end
  end
  object MediaPlayer2: TMediaPlayer
    Left = 120
    Top = 408
    Width = 253
    Height = 30
    DoubleBuffered = True
    Visible = False
    ParentDoubleBuffered = False
    TabOrder = 1
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 256
    Top = 152
  end
end
