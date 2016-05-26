object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'Form1'
  ClientHeight = 784
  ClientWidth = 1150
  Color = clBlack
  DoubleBuffered = True
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
        ExplicitLeft = 384
        ExplicitTop = 320
        ExplicitWidth = 105
        ExplicitHeight = 105
      end
      object Panel1: TPanel
        AlignWithMargins = True
        Left = 603
        Top = 275
        Width = 177
        Height = 322
        Color = clWhite
        ParentBackground = False
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
        ExplicitLeft = -48
        ExplicitTop = -24
      end
      object Image1: TImage
        AlignWithMargins = True
        Left = 379
        Top = 24
        Width = 802
        Height = 802
        Center = True
        OnMouseMove = Image1MouseMove
      end
      object Label4: TLabel
        Left = 272
        Top = 404
        Width = 34
        Height = 13
        Caption = '1-1000'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clHighlightText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label5: TLabel
        Left = 80
        Top = 483
        Width = 20
        Height = 13
        Caption = #1060#1086#1085
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label6: TLabel
        Left = 80
        Top = 523
        Width = 37
        Height = 13
        Caption = #1050#1083#1077#1090#1082#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label7: TLabel
        Left = 80
        Top = 571
        Width = 45
        Height = 13
        Caption = #1055#1083#1072#1085#1077#1088#1099
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Button1: TButton
        Left = 144
        Top = 192
        Width = 75
        Height = 25
        Caption = #1057#1090#1072#1088#1090
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 144
        Top = 256
        Width = 75
        Height = 25
        Caption = #1057#1090#1086#1087
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button3: TButton
        Left = 144
        Top = 312
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
        OnNotify = MediaPlayer1Notify
      end
      object Button9: TButton
        Left = 144
        Top = 368
        Width = 75
        Height = 25
        Caption = #1052#1077#1085#1102
        TabOrder = 4
        OnClick = Button9Click
      end
      object Button12: TButton
        Left = 136
        Top = 429
        Width = 75
        Height = 25
        Caption = #1057#1082#1086#1088#1086#1089#1090#1100
        TabOrder = 5
        OnClick = Button12Click
      end
      object Edit1: TEdit
        Left = 257
        Top = 431
        Width = 65
        Height = 21
        TabOrder = 6
      end
      object ColorBox1: TColorBox
        Left = 137
        Top = 480
        Width = 128
        Height = 22
        Selected = clWhite
        TabOrder = 7
        OnChange = ColorBox1Change
      end
      object ColorBox2: TColorBox
        Left = 136
        Top = 520
        Width = 145
        Height = 22
        Selected = clRed
        TabOrder = 8
        OnChange = ColorBox2Change
      end
      object ColorBox3: TColorBox
        Left = 136
        Top = 568
        Width = 145
        Height = 22
        Selected = clBlue
        TabOrder = 9
        OnChange = ColorBox3Change
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
        Left = 504
        Top = 112
        Width = 337
        Height = 561
        Color = clWhite
        ParentBackground = False
        TabOrder = 0
        object Label3: TLabel
          Left = 98
          Top = 7
          Width = 39
          Height = 19
          Caption = #1058#1077#1084#1099
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = 19
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
        end
        object CheckBox1: TCheckBox
          Left = 64
          Top = 32
          Width = 129
          Height = 17
          ParentCustomHint = False
          Caption = #1063#1077#1096#1080#1088#1089#1082#1080#1081' '#1082#1086#1090
          Color = clWhite
          Ctl3D = True
          DoubleBuffered = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = 15
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
          Left = 134
          Top = 456
          Width = 75
          Height = 25
          Caption = #1054#1050
          TabOrder = 1
          OnClick = Button10Click
        end
        object GroupBox1: TGroupBox
          Left = 56
          Top = 55
          Width = 193
          Height = 362
          TabOrder = 2
          object RadioButton1: TRadioButton
            Left = 21
            Top = 39
            Width = 113
            Height = 17
            Caption = #1063#1077#1096#1080#1088#1089#1082#1080#1081' '#1082#1086#1090
            TabOrder = 0
            OnClick = RadioButton1Click
          end
          object RadioButton2: TRadioButton
            Left = 21
            Top = 16
            Width = 113
            Height = 17
            Caption = #1050#1086#1089#1084#1086#1089
            TabOrder = 1
            OnClick = RadioButton2Click
          end
          object RadioButton3: TRadioButton
            Left = 21
            Top = 62
            Width = 113
            Height = 17
            Caption = #1054#1075#1086#1085#1100
            TabOrder = 2
            OnClick = RadioButton3Click
          end
          object RadioButton4: TRadioButton
            Left = 21
            Top = 85
            Width = 113
            Height = 17
            Caption = #1042#1086#1076#1072
            TabOrder = 3
            OnClick = RadioButton4Click
          end
          object RadioButton5: TRadioButton
            Left = 21
            Top = 108
            Width = 113
            Height = 17
            Caption = #1058#1088#1086#1087#1080#1095#1077#1089#1082#1080#1081' '#1088#1072#1081
            TabOrder = 4
            OnClick = RadioButton5Click
          end
          object RadioButton6: TRadioButton
            Left = 21
            Top = 131
            Width = 113
            Height = 17
            Caption = #1051#1077#1089
            TabOrder = 5
            OnClick = RadioButton6Click
          end
          object RadioButton7: TRadioButton
            Left = 21
            Top = 154
            Width = 113
            Height = 17
            Caption = #1058#1105#1084#1085#1099#1081' '#1083#1077#1089
            TabOrder = 6
            OnClick = RadioButton7Click
          end
          object RadioButton8: TRadioButton
            Left = 24
            Top = 177
            Width = 113
            Height = 17
            Caption = #1044#1086#1078#1076#1100
            TabOrder = 7
            OnClick = RadioButton8Click
          end
          object RadioButton9: TRadioButton
            Left = 24
            Top = 200
            Width = 113
            Height = 17
            Caption = #1047#1080#1084#1072
            TabOrder = 8
            OnClick = RadioButton9Click
          end
          object RadioButton10: TRadioButton
            Left = 24
            Top = 223
            Width = 113
            Height = 17
            Caption = #1042#1086#1079#1076#1091#1093
            TabOrder = 9
            OnClick = RadioButton10Click
          end
          object RadioButton12: TRadioButton
            Left = 24
            Top = 253
            Width = 113
            Height = 17
            Caption = #1052#1080#1085#1080#1084#1072#1083#1080#1079#1084
            TabOrder = 10
          end
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
    Left = 144
    Top = 608
    Width = 253
    Height = 30
    DoubleBuffered = True
    Visible = False
    ParentDoubleBuffered = False
    TabOrder = 1
    OnNotify = MediaPlayer2Notify
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 256
    Top = 152
  end
  object XPColorMap1: TXPColorMap
    HighlightColor = clWhite
    BtnSelectedColor = clBtnFace
    UnusedColor = clWhite
    Left = 392
    Top = 168
  end
end
