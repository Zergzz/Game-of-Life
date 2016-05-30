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
    PageIndex = 2
    TabOrder = 0
    ExplicitLeft = 88
    ExplicitTop = 48
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
          OnClick = Button7Click
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
        OnClick = Image4Click
        ExplicitTop = 8
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
      object Label8: TLabel
        Left = 171
        Top = 642
        Width = 40
        Height = 13
        Caption = #1052#1077#1085#1100#1096#1077
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label9: TLabel
        Left = 170
        Top = 661
        Width = 38
        Height = 13
        Caption = #1041#1086#1083#1100#1096#1077
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label10: TLabel
        Left = 106
        Top = 709
        Width = 37
        Height = 13
        Caption = #1050#1083#1077#1090#1082#1072
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindow
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label11: TLabel
        Left = 106
        Top = 749
        Width = 37
        Height = 13
        Caption = #1055#1083#1072#1085#1077#1088
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
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
        OnClick = Edit1Click
      end
      object ColorBox1: TColorBox
        Left = 137
        Top = 480
        Width = 128
        Height = 22
        Selected = clWhite
        TabOrder = 7
        OnChange = ColorBox1Change
        OnClick = ColorBox1Click
      end
      object ColorBox2: TColorBox
        Left = 136
        Top = 520
        Width = 145
        Height = 22
        Selected = clRed
        TabOrder = 8
        OnChange = ColorBox2Change
        OnClick = ColorBox2Click
      end
      object ColorBox3: TColorBox
        Left = 136
        Top = 568
        Width = 145
        Height = 22
        Selected = clBlue
        TabOrder = 9
        OnChange = ColorBox3Change
        OnClick = ColorBox3Click
      end
      object RadioButton11: TRadioButton
        Left = 149
        Top = 641
        Width = 15
        Height = 17
        Checked = True
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
        TabOrder = 10
        TabStop = True
        OnClick = RadioButton11Click
      end
      object RadioButton13: TRadioButton
        Left = 149
        Top = 664
        Width = 15
        Height = 17
        Caption = 'RadioButton13'
        TabOrder = 11
        OnClick = RadioButton13Click
      end
      object Button14: TButton
        Left = 149
        Top = 704
        Width = 75
        Height = 25
        Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100
        TabOrder = 12
        OnClick = Button14Click
      end
      object Button15: TButton
        Left = 149
        Top = 744
        Width = 75
        Height = 25
        Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100
        TabOrder = 13
        OnClick = Button15Click
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
        object Button10: TButton
          Left = 134
          Top = 456
          Width = 75
          Height = 25
          Caption = #1054#1050
          TabOrder = 0
          OnClick = Button10Click
        end
        object GroupBox1: TGroupBox
          Left = 56
          Top = 55
          Width = 193
          Height = 362
          TabOrder = 1
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
      object Button13: TButton
        Left = 776
        Top = 664
        Width = 75
        Height = 25
        Caption = #1054#1095#1080#1089#1090#1080#1090#1100
        TabOrder = 1
        OnClick = Button13Click
      end
    end
    object TPage
      Left = 0
      Top = 0
      ExplicitWidth = 0
      ExplicitHeight = 0
      object Label12: TLabel
        Left = 488
        Top = 296
        Width = 116
        Height = 19
        Caption = #1042#1074#1077#1076#1080#1090#1077' '#1087#1072#1088#1086#1083#1100
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clCream
        Font.Height = 19
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Edit2: TEdit
        Left = 488
        Top = 360
        Width = 121
        Height = 21
        MaxLength = 4
        TabOrder = 0
      end
      object Button16: TButton
        Left = 512
        Top = 408
        Width = 75
        Height = 25
        Caption = #1054#1082
        TabOrder = 1
      end
      object Button17: TButton
        Left = 512
        Top = 448
        Width = 75
        Height = 25
        Caption = #1054#1090#1084#1077#1085#1072
        TabOrder = 2
        OnClick = Button17Click
      end
    end
  end
  object MediaPlayer2: TMediaPlayer
    Left = 68
    Top = 104
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
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 424
    Top = 584
  end
end
