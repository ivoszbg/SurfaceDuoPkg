APRIORI DXE {

    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf

    FILE DRIVER = 90a49afd-422f-08ae-9611-e788d3804845 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-90a49afd-422f-08ae-9611-e788d3804845/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-90a49afd-422f-08ae-9611-e788d3804845/section1.pe
            SECTION UI = "EnvDxe"
    }

    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    # INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    # INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    # Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    FILE DRIVER = 5e0eae60-eaed-4d75-b8bf-edbbaabc3f09 {
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-5e0eae60-eaed-4d75-b8bf-edbbaabc3f09/section0.pe
            SECTION UI = "SecurityDxe"
    }

    FILE DRIVER = c2f9a4f5-f7b4-43e7-ba99-5ea804cc103a {
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-c2f9a4f5-f7b4-43e7-ba99-5ea804cc103a/section0.pe
            SECTION UI = "ASN1X509Dxe"
    }

    FILE DRIVER = 32c71e68-83a8-46ed-aed1-094e71b12057 {
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-32c71e68-83a8-46ed-aed1-094e71b12057/section0.pe
            SECTION UI = "SecRSADxe"
    }

    FILE DRIVER = a25f5839-4d55-428f-8f0b-5ce1d565f53e {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-a25f5839-4d55-428f-8f0b-5ce1d565f53e/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-a25f5839-4d55-428f-8f0b-5ce1d565f53e/section1.pe
            SECTION UI = "VerifiedBootDxe"
    }


    FILE DRIVER = f541d663-4a48-40aa-aabf-ff158ccae34c {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-f541d663-4a48-40aa-aabf-ff158ccae34c/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.1.4-00280-S36LZB-1/volume-8/file-f541d663-4a48-40aa-aabf-ff158ccae34c/section1.pe
            SECTION UI = "SmemDxe"
    }

    FILE DRIVER = 8e9bd160-b184-11df-94e2-0800200c9a66 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/DALSys/DALSys.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/DALSys/DALSys.efi
            SECTION UI = "DALSys"
    }

    FILE DRIVER = af9763a2-033b-4109-8e17-56a98d380c92 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/HWIODxeDriver/HWIODxeDriver.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/HWIODxeDriver/HWIODxeDriver.efi
            SECTION UI = "HWIODxeDriver"
    }

    FILE DRIVER = 10e193df-9966-44e7-b17c-59dd831e20fc {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/ChipInfo/ChipInfo.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/ChipInfo/ChipInfo.efi
            SECTION UI = "ChipInfo"
    }

    FILE DRIVER = b105211b-bbbd-4add-a3b0-d1cf4a52154c {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/PlatformInfoDxeDriver/PlatformInfoDxeDriver.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/PlatformInfoDxeDriver/PlatformInfoDxeDriver.efi
            SECTION UI = "PlatformInfoDxeDriver"
    }

    FILE DRIVER = e43128a8-8692-42b6-8afa-676158578d18 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/ULogDxe/ULogDxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/ULogDxe/ULogDxe.efi
            SECTION UI = "ULogDxe"
    }

    FILE DRIVER = cb29f4d1-7f37-4692-a416-93e82e219711 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/NpaDxe/NpaDxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/NpaDxe/NpaDxe.efi
            SECTION UI = "NpaDxe"
    }

    FILE DRIVER = 4db5dea6-5302-4d1a-8a82-677a683b0d29 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/PatchedBinaries/ClockDxe/ClockDxe.depex
            SECTION PE32 = SurfaceDuoPkg/PatchedBinaries/ClockDxe/ClockDxe.efi
            SECTION UI = "ClockDxe"
    }

    FILE DRIVER = 7942a7eb-b7d5-4e2e-b908-831e4de55b58 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/GlinkDxe/GlinkDxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/GlinkDxe/GlinkDxe.efi
            SECTION UI = "GlinkDxe"
    }

    #FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0-00527-SM8150LZB-1/volume-0/file-2/section0/section1/volume-0/file-6b38f7b4-ad98-40e9-9093-aca2b5a253c4/section0.pe
    #        SECTION UI = "DiskIoDxe"
    #}

    INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

    #FILE DRIVER = f10f76db-42c1-533f-34a8-69be24653110 {
    #        SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/SdccDxe/SdccDxe.depex
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/SdccDxe/SdccDxe.efi
    #        SECTION UI = "SdccDxe"
    #}

    # Do we really need UFSDxe?
    FILE DRIVER = 0d35cd8e-97ea-4f9a-96af-0f0d89f76567 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/UFSDxe/UFSDxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/UFSDxe/UFSDxe.efi
            SECTION UI = "UFSDxe"
    }

    INF FatPkg/EnhancedFatDxe/Fat.inf

    # TODO: Add TzDxe, shouldn't be important for now though
    #FILE DRIVER = 6925fad3-e243-4b69-ad61-3f978c8abc60 {
    #        SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0-00527-SM8150LZB-1/volume-0/file-2/section0/section1/volume-0/file-6925fad3-e243-4b69-ad61-3f978c8abc60/section0.dxe.depex
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0-00527-SM8150LZB-1/volume-0/file-2/section0/section1/volume-0/file-6925fad3-e243-4b69-ad61-3f978c8abc60/section1.pe
    #        SECTION UI = "TzDxe"
    #}

    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    FILE DRIVER = 8681cc5a-0df6-441e-b4b8-e915c538f067 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/DALTLMM/DALTLMM.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/DALTLMM/DALTLMM.efi
            SECTION UI = "DALTLMM"
    }

    FILE DRIVER = 2a7b4bef-80cd-49e1-b473-374ba4d673fc {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/SPMI/SPMI.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/SPMI/SPMI.efi
            SECTION UI = "SPMI"
    }

    FILE DRIVER = 5776232e-082d-4b75-9a0e-fe1d13f7a5d9 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/PmicDxe/PmicDxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/PmicDxe/PmicDxe.efi
            SECTION UI = "PmicDxe"
    }

    # TODO: Patch and add DisplayDxe instead of SimpleFB
    INF SurfaceDuoPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf

    INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf

    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf

    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    FILE DRIVER = ed15ffd5-bc96-4107-9118-95366600188e { 
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm636/FontDxe/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm636/FontDxe/section1.pe
            SECTION UI = "FontDxe"
    }

    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

    FILE DRIVER = 04de8591-d2b3-4077-bbbe-b12070094eb6 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/I2C/I2C.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/I2C/I2C.efi
            SECTION UI = "I2C"
    }

    FILE DRIVER = 5a5cb8ca-9382-4e0c-b383-77fb517cd9eb {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/AdcDxe/AdcDxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/AdcDxe/AdcDxe.efi
            SECTION UI = "AdcDxe"
    }

    #FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
    #        SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/UsbfnDwc3Dxe/UsbfnDwc3Dxe.efi
    #        SECTION UI = "UsbfnDwc3Dxe"
    #}

    #FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
    #       SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0.1-00243-SC8180XWZB-2/volume-0/file-2/section0/section1/volume-0/file-240612b7-a063-11d4-9a3a-0090273fc14d/section0.pe
    #        SECTION UI = "UsbBusDxe"
    #}

    # FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0.1-00243-SC8180XWZB-2/volume-0/file-2/section0/section1/volume-0/file-2d2e62cf-9ecf-43b7-8219-94e7fc713dfe/section0.pe
    #        SECTION UI = "UsbKbDxe"
    #}

    #FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/BOOT.XF.3.0.1-00243-SC8180XWZB-2/volume-0/file-2/section0/section1/volume-0/file-9fb4b4a7-42c0-4bcd-8540-9bcc6711f83e/section0.pe
    #        SECTION UI = "UsbMassStorageDxe"
    #}

    #FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8 {
    #        SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/UsbConfigDxe/UsbConfigDxe.depex
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/UsbConfigDxe/UsbConfigDxe.efi
    #        SECTION UI = "UsbConfigDxe"
    #}

    #FILE DRIVER = 3299a266-15f0-4346-8318-716336736d3e {
    #        SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm660/UsbDeviceDxe/UsbDeviceDxe.depex
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/UsbDeviceDxe/UsbDeviceDxe.efi
    #        SECTION UI = "UsbDeviceDxe"
    #}

    FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
            SECTION DXE_DEPEX = SurfaceDuoPkg/PatchedBinaries/ButtonsDxe/ButtonsDxe.depex
            SECTION PE32 = SurfaceDuoPkg/PatchedBinaries/ButtonsDxe/ButtonsDxe.efi
            SECTION UI = "ButtonsDxe"
    }

    FILE DRIVER = f09ad92e-485c-9cdb-3e05-3385c38f94cc {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm636/TsensDxe/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm636/TsensDxe/section1.pe
            SECTION UI = "TsensDxe"
    }

    FILE DRIVER = f09ad92e-4e91-490f-ab99-e69939b840b2 {
            SECTION UI = "LimitsDxe"
            SECTION VERSION = "None"
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm636/LimitsDxe/section0.pe
    }

    FILE DRIVER = 88abf42e-efa7-4d72-a9c8-8b29acdcf64f {
            SECTION DXE_DEPEX = SurfaceDuoPkg/FirmwareBinaries/sdm636/MpPowerDxe/section0.dxe.depex
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm636/MpPowerDxe/section1.pe
            SECTION UI = "MpPowerDxe"
    }

    FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
            SECTION UI = "HashDxe"
            SECTION VERSION = "None"
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/HashDxe/HashDxe.efi
    }

    FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
            SECTION UI = "RngDxe"
            SECTION VERSION = "None"
            SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm660/RngDxe/RngDxe.efi
    }

    INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf

# CHANGE
    INF DfciPkg/SettingsManager/SettingsManagerDxe.inf
    INF DfciPkg/IdentityAndAuthManager/IdentityAndAuthManagerDxe.inf
    INF MsGraphicsPkg/MsUiTheme/Dxe/MsUiThemeProtocol.inf
    INF MsGraphicsPkg/SimpleWindowManagerDxe/SimpleWindowManagerDxe.inf
    INF MsGraphicsPkg/RenderingEngineDxe/RenderingEngineDxe.inf
# END CHANGE

    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf

    #FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
    #        SECTION PE32 = SurfaceDuoPkg/FirmwareBinaries/sdm636/GraphicsConsoleDxe/section0.pe
    #        SECTION UI = "GraphicsConsoleDxe"
    #}

# CHANGE
    INF MsGraphicsPkg/GopOverrideDxe/GopOverrideDxe.inf
# END CHANGE

    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    }
