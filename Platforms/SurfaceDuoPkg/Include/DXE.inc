
    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    # Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

    INF FatPkg/EnhancedFatDxe/Fat.inf

    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF SurfaceDuoPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf

    INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf

    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf

    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    FILE DRIVER = ed15ffd5-bc96-4107-9118-95366600188e {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0-00527-SM8150LZB-1/volume-0/file-2/section0/section1/volume-0/file-ed15ffd5-bc96-4107-9118-95366600188e/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0-00527-SM8150LZB-1/volume-0/file-2/section0/section1/volume-0/file-ed15ffd5-bc96-4107-9118-95366600188e/section1.pe
            SECTION UI = "FontDxe"
    }

    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

    INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf

    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
    INF MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf

    INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
