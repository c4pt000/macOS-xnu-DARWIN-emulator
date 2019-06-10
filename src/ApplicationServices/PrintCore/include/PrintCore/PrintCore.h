/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _PrintCore_H_
#define _PrintCore_H_

#import <Foundation/Foundation.h>

#import <PrintCore/PMInkChecker.h>

void* CPLAutoSelectCancel(void);
void* CPLAutoSelectCopyLocation(void);
void* CPLAutoSelectCreateContext(void);
void* CPLAutoSelectGetInfo(void);
void* CPLAutoSelectHasNewPPD(void);
void* CPLAutoSelectInstallableOptions(void);
void* CPLAutoSelectIsBinaryOK(void);
void* CPLAutoSelectPPD(void);
void* CPLAutoSelectReleaseContext(void);
void* CPLAutoSelectSetIsBinaryOK(void);
void* CPLAutoSetupCanGetInstallableOptions(void);
void* CPLCopyDefaultPaperID(void);
void* CPLCopyDefaultPrinterName(void);
void* CPLCopyGenericPPDURL(void);
void* CPLCopyLocalServerURL(void);
void* CPLCopyM5DefaultPrinterName(void);
void* CPLCopyPrinterNames(void);
void* CPLCreateOptions(void);
void* CPLCreateOptionsStr(void);
void* CPLCreateSuggestedQueueName(void);
void* CPLEmptyPPDCache(void);
void* CPLEmptyPrintersCache(void);
void* CPLGetErrorString(void);
void* CPLInstallIconFile(void);
void* CPLIsPrintAdmin(void);
void* CPLIsPrintingManaged(void);
void* CPLPrinterCopyPPD(void);
void* CPLPrinterGetType(void);
void* CPLPrinterNameInUse(void);
void* CPLPrinterSetLocation(void);
void* CPLPrinterSetPPD(void);
void* CPLQueuePrintDocument(void);
void* CPLQueueResume(void);
void* CPLRemovePrinter(void);
void* CPLRemovePrinterKeepPreferences(void);
void* CPLResetPrintingPermissions(void);
void* CPLResetPrintingSystem(void);
void* CPLServerCreateClass(void);
void* CPLServerCreateQueue(void);
void* CPLSetDefaultPaperID(void);
void* CPLSetDefaultPrinterName(void);
void* CPLSetUseLastPrinterAsCurrentPrinter(void);
void* CPLStartAirScanLegacyBrowsing(void);
void* CPLUseLastPrinterAsCurrentPrinter(void);
void* CreateCStrFromEncodedValue(void);
void* FindBestMediaForSheetSize(void);
void* GetPPDDefaultColorSpace(void);
void* GetPPDRefFromSession(void);
void* MakePrinterDeviceIDFromStr(void);
void* PJCCopyArrayPresetPrintingPref(void);
void* PJCCopyArrayPrintingPref(void);
void* PJCCopyBooleanPrintingPref(void);
void* PJCCopyDictionaryPresetPrintingPref(void);
void* PJCCopyDictionaryPrintingPref(void);
void* PJCCopyNumberPresetPrintingPref(void);
void* PJCCopyNumberPrintingPref(void);
void* PJCCopyPrinterPrimaryProfileFromSettings(void);
void* PJCCopyStringPresetPrintingPref(void);
void* PJCCopyStringPrintingPref(void);
void* PJCCreateAndLaunchPrinterProxy(void);
void* PJCCreateDefaultSaveToFileName(void);
void* PJCCreateLocalizedNameFromPPDChoiceName(void);
void* PJCCreateLocalizedPaperName2(void);
void* PJCCreateLocalizedPaperNameWithPPD(void);
void* PJCCreatePMPaperForPaperInfoEntry(void);
void* PJCCreatePaperInfoListForMenuInternal(void);
void* PJCCreateSuggestedPaper(void);
void* PJCForceRelease(void);
void* PJCGetCurrentProfileIDFromPPD(void);
void* PJCIsMetric(void);
void* PJCLaunchPrintCenter(void);
void* PJCNewPageFormatWithPMPaper(void);
void* PJCPrintSettingsCreateCustomProfileRef(void);
void* PJCPrintSettingsSetCustomProfilePath(void);
void* PJCPrinterCopyReadyMediaList(void);
void* PJCPrinterGetDeviceID(void);
void* PJCPrinterProxyCreateURL(void);
void* PJCPrinterSupportsReadyMedia(void);
void* PJCPrinterSupportsThisCustomPaper(void);
void* PJCRunWorkflowWithRenamedPDF(void);
void* PJCSessionCreateCopyForAppKit(void);
void* PJCSessionHasApplicationSetPrinter(void);
void* PJCSessionSetHideFileExtension(void);
void* PJCSetPresetPrintingPref(void);
void* PJCSetPrintingPref(void);
void* PJCTicketGetSrcImageableArea(void);
void* PJCTicketGetSrcOrientation(void);
void* PJCTicketGetSrcPaperSize(void);
void* PJCTicketGetSrcResolution(void);
void* PJCTicketGetSrcScaling(void);
void* PMBackendExecIO(void);
void* PMCFEqual(void);
void* PMCGImageCreateWithEPSDataProvider(void);
void* PMConvertFile(void);
void* PMCopyAvailablePPDs(void);
void* PMCopyCountry(void);
void* PMCopyLocalizedPPD(void);
void* PMCopyPPDData(void);
void* PMCopyPageFormat(void);
void* PMCopyPrintSettings(void);
void* PMCopyUserDefaultPaperSize(void);
void* PMCreateCFArrayForPMObjects(void);
void* PMCreateGenericPrinter(void);
void* PMCreatePageFormat(void);
void* PMCreatePageFormatWithPMPaper(void);
void* PMCreatePaperInfoTicketFromPPDPaperName(void);
void* PMCreatePrintSettings(void);
void* PMCreatePrinter(void);
void* PMCreateProxy(void);
void* PMCreateSession(void);
void* PMDebugSet_Boolean(void);
void* PMDebugSet_CFTypeRef(void);
void* PMDebugSet_PMObject(void);
void* PMDebugSet_PMRect_p(void);
void* PMDebugSet_char_p(void);
void* PMDebugSet_double(void);
void* PMDebugSet_long(void);
void* PMDebugSet_ulong(void);
void* PMExecIO(void);
void* PMFindProxy(void);
void* PMFlattenPageFormatToCFData(void);
void* PMFlattenPageFormatToURL(void);
void* PMFlattenPrintSettingsToCFData(void);
void* PMFlattenPrintSettingsToURL(void);
void* PMGetAdjustedPageRect(void);
void* PMGetAdjustedPaperRect(void);
void* PMGetCollate(void);
void* PMGetCopies(void);
void* PMGetDuplex(void);
void* PMGetFirstPage(void);
void* PMGetLastPage(void);
void* PMGetOrientation(void);
void* PMGetPageFormatExtendedData(void);
void* PMGetPageFormatPaper(void);
void* PMGetPageRange(void);
void* PMGetPrintSettingsExtendedData(void);
void* PMGetPrinterModel(void);
void* PMGetReverseOrder(void);
void* PMGetScale(void);
void* PMGetUnadjustedPageRect(void);
void* PMGetUnadjustedPaperRect(void);
void* PMInlineWorkflowCopyItems(void);
void* PMInstallCoercionHandlers(void);
void* PMLaunchProxy(void);
void* PMMonitorOnlineOfflineState(void);
void* PMPDEBundleNeedsDisabledSandbox(void);
void* PMPageFormatComputeAdjustedRects(void);
void* PMPageFormatComputeAdjustedRectsWithPrinter(void);
void* PMPageFormatCreateDataRepresentation(void);
void* PMPageFormatCreateWithDataRepresentation(void);
void* PMPageFormatGetPrinterID(void);
void* PMPaperAddToUserPrefs(void);
void* PMPaperCopyUserPrefs(void);
void* PMPaperCreateCustom(void);
void* PMPaperCreateFromPaperInfo(void);
void* PMPaperCreateInternal(void);
void* PMPaperCreateLocalizedName(void);
void* PMPaperCreatePMTicketRef(void);
void* PMPaperGetHeight(void);
void* PMPaperGetID(void);
void* PMPaperGetMargins(void);
void* PMPaperGetName(void);
void* PMPaperGetPPDPaperName(void);
void* PMPaperGetPrinterID(void);
void* PMPaperGetWidth(void);
void* PMPaperIsCustom(void);
void* PMPaperRemoveFromUserPrefs(void);
void* PMPresetCopyName(void);
void* PMPresetCreatePageFormat(void);
void* PMPresetCreatePrintSettings(void);
void* PMPresetGetAttributes(void);
void* PMPrintSettingsCopyAsDictionary(void);
void* PMPrintSettingsCopyKeys(void);
void* PMPrintSettingsCreateDataRepresentation(void);
void* PMPrintSettingsCreateWithDataRepresentation(void);
void* PMPrintSettingsGetJobName(void);
void* PMPrintSettingsGetValue(void);
void* PMPrintSettingsSetJobName(void);
void* PMPrintSettingsSetValue(void);
void* PMPrintSettingsToOptions(void);
void* PMPrintSettingsToOptionsWithPrinterAndPageFormat(void);
void* PMPrinterCanDuplex(void);
void* PMPrinterCanIdentify(void);
void* PMPrinterCanScan(void);
void* PMPrinterCancelConnect(void);
void* PMPrinterChargeInfoURI(void);
void* PMPrinterCopyACL(void);
void* PMPrinterCopyDefaultUserCredentials(void);
void* PMPrinterCopyDescriptionURL(void);
void* PMPrinterCopyDeviceURI(void);
void* PMPrinterCopyFinalDeviceURI(void);
void* PMPrinterCopyHostName(void);
void* PMPrinterCopyMembers(void);
void* PMPrinterCopyPresets(void);
void* PMPrinterCopyRequiredUserCredentials(void);
void* PMPrinterCopyScannerUUID(void);
void* PMPrinterCopyScanningApp(void);
void* PMPrinterCopyScanningAppPath(void);
void* PMPrinterCopyState(void);
void* PMPrinterCopySuppliesURI(void);
void* PMPrinterCopyTempPPDURL(void);
void* PMPrinterCreateFromPrinterID(void);
void* PMPrinterCreatePaperInfoListForMenu(void);
void* PMPrinterCreatePaperInfoListForMenuPriv(void);
void* PMPrinterGetCMDeviceID(void);
void* PMPrinterGetCommInfo(void);
void* PMPrinterGetConsumables(void);
void* PMPrinterGetConsumablesDisclaimer(void);
void* PMPrinterGetConsumablesOptionalText(void);
void* PMPrinterGetCustomPaperSizeHardwareMargins(void);
void* PMPrinterGetCustomPaperSizeHardwareSheetSize(void);
void* PMPrinterGetDriverCreator(void);
void* PMPrinterGetDriverReleaseInfo(void);
void* PMPrinterGetID(void);
void* PMPrinterGetIconData(void);
void* PMPrinterGetImage(void);
void* PMPrinterGetIndexedPrinterResolution(void);
void* PMPrinterGetLanguageInfo(void);
void* PMPrinterGetLocation(void);
void* PMPrinterGetMakeAndModelName(void);
void* PMPrinterGetMarkerChangeTime(void);
void* PMPrinterGetMimeTypes(void);
void* PMPrinterGetName(void);
void* PMPrinterGetOutputResolution(void);
void* PMPrinterGetPaperList(void);
void* PMPrinterGetPrinterResolutionCount(void);
void* PMPrinterGetPrinterValue(void);
void* PMPrinterGetState(void);
void* PMPrinterHasCustomPaperSizes(void);
void* PMPrinterIdentify(void);
void* PMPrinterIsAirPrint(void);
void* PMPrinterIsAllowed(void);
void* PMPrinterIsClass(void);
void* PMPrinterIsDefault(void);
void* PMPrinterIsDirectConnect(void);
void* PMPrinterIsFavorite(void);
void* PMPrinterIsFax(void);
void* PMPrinterIsGenericPrinter(void);
void* PMPrinterIsLocked(void);
void* PMPrinterIsPostScriptCapable(void);
void* PMPrinterIsPostScriptPrinter(void);
void* PMPrinterIsRemote(void);
void* PMPrinterIsScanner(void);
void* PMPrinterIsShared(void);
void* PMPrinterOpenSuppliesURI(void);
void* PMPrinterPrintWithFile(void);
void* PMPrinterPrintWithProvider(void);
void* PMPrinterRequiresAccountingInformation(void);
void* PMPrinterRequiresUserCredentials(void);
void* PMPrinterSendCommand(void);
void* PMPrinterSetACL(void);
void* PMPrinterSetConsumables(void);
void* PMPrinterSetConsumablesDisclaimer(void);
void* PMPrinterSetConsumablesOptionalText(void);
void* PMPrinterSetDefault(void);
void* PMPrinterSetFavorite(void);
void* PMPrinterSetLocation(void);
void* PMPrinterSetMarkerChangeTime(void);
void* PMPrinterSetModel(void);
void* PMPrinterSetName(void);
void* PMPrinterSetOutputResolution(void);
void* PMPrinterSetShared(void);
void* PMPrinterStartConnect(void);
void* PMPrinterStartMonitoring(void);
void* PMPrinterStopMonitoring(void);
void* PMPrinterSupportsMatchingMode(void);
void* PMPrinterUsesTCP(void);
void* PMPrinterWritePostScriptToURL(void);
void* PMRelease(void);
void* PMRetain(void);
void* PMServerCopyJobLog(void);
void* PMServerCreateDeviceList(void);
void* PMServerCreatePrinterList(void);
void* PMServerFavoritesListHasChanged(void);
void* PMServerLaunchPrinterBrowser(void);
void* PMServerPrinterListHasChanged(void);
void* PMSessionBeginCGDocumentNoDialog(void);
void* PMSessionBeginDocumentNoDialogPrivate(void);
void* PMSessionBeginPageNoDialog(void);
void* PMSessionCopyApplicationOutputIntent(void);
void* PMSessionCopyApplicationOutputIntentWithColorSyncProfiles(void);
void* PMSessionCopyCurrentPrinterColorSyncProfile(void);
void* PMSessionCopyCurrentPrinterProfile(void);
void* PMSessionCopyDefaultOutputIntent(void);
void* PMSessionCopyDefaultOutputIntentWithColorSyncProfiles(void);
void* PMSessionCopyDestinationFormat(void);
void* PMSessionCopyDestinationLocation(void);
void* PMSessionCopyOutputFormatList(void);
void* PMSessionCreateCurrentPrinterColorSpace(void);
void* PMSessionCreatePageFormatList(void);
void* PMSessionCreatePrinterList(void);
void* PMSessionDefaultPageFormat(void);
void* PMSessionDefaultPrintSettings(void);
void* PMSessionDisablePresetsPopUp(void);
void* PMSessionDisablePrinterPresetsPrivate(void);
void* PMSessionEnablePresetsPopUp(void);
void* PMSessionEnablePrinterPresetsPrivate(void);
void* PMSessionEndDocumentNoDialog(void);
void* PMSessionEndPageNoDialog(void);
void* PMSessionError(void);
void* PMSessionGetCGGraphicsContext(void);
void* PMSessionGetColorMatchingMode(void);
void* PMSessionGetColorMatchingMode2(void);
void* PMSessionGetColorMatchingModeLock(void);
void* PMSessionGetCurrentPrinter(void);
void* PMSessionGetDataFromSession(void);
void* PMSessionGetDestinationType(void);
void* PMSessionGetDocumentTags(void);
void* PMSessionGetGenericPrinter(void);
void* PMSessionGetHideFileExtension(void);
void* PMSessionSetApplicationOutputIntent(void);
void* PMSessionSetApplicationOutputIntentWithColorSyncProfiles(void);
void* PMSessionSetColorMatchingMode(void);
void* PMSessionSetColorMatchingModeLock(void);
void* PMSessionSetColorMatchingModeNoLock(void);
void* PMSessionSetCurrentPMPrinter(void);
void* PMSessionSetDataInSession(void);
void* PMSessionSetDefaultButtonTitleCFString(void);
void* PMSessionSetDestination(void);
void* PMSessionSetDocumentTags(void);
void* PMSessionSetError(void);
void* PMSessionSetHideFileExtension(void);
void* PMSessionSetPrintingDialogTitleCFString(void);
void* PMSessionValidatePageFormat(void);
void* PMSessionValidatePrintSettings(void);
void* PMSetCollate(void);
void* PMSetCopies(void);
void* PMSetCopyCollate(void);
void* PMSetDuplex(void);
void* PMSetFirstPage(void);
void* PMSetLastPage(void);
void* PMSetOrientation(void);
void* PMSetPageFormatExtendedData(void);
void* PMSetPageRange(void);
void* PMSetPrintSettingsExtendedData(void);
void* PMSetReverseOrder(void);
void* PMSetScale(void);
void* PMSetUserDefaultPaperSize(void);
void* PMShouldEnableSupplies(void);
void* PMTicketConfirmTicket(void);
void* PMTicketContainsItem(void);
void* PMTicketContainsTicket(void);
void* PMTicketCopy(void);
void* PMTicketCopyItem(void);
void* PMTicketCopyKeys(void);
void* PMTicketCreate(void);
void* PMTicketCreateDict(void);
void* PMTicketCreateMutableDict(void);
void* PMTicketCreateTemplate(void);
void* PMTicketDeleteItem(void);
void* PMTicketFillFromArray(void);
void* PMTicketGetAPIVersion(void);
void* PMTicketGetAllocator(void);
void* PMTicketGetBoolean(void);
void* PMTicketGetBytes(void);
void* PMTicketGetCFArray(void);
void* PMTicketGetCFBoolean(void);
void* PMTicketGetCFData(void);
void* PMTicketGetCFDate(void);
void* PMTicketGetCFDictionary(void);
void* PMTicketGetCFNumber(void);
void* PMTicketGetCFString(void);
void* PMTicketGetCString(void);
void* PMTicketGetDouble(void);
void* PMTicketGetEnumType(void);
void* PMTicketGetItem(void);
void* PMTicketGetPMRect(void);
void* PMTicketGetPMResolution(void);
void* PMTicketGetPString(void);
void* PMTicketGetRetainCount(void);
void* PMTicketGetSInt32(void);
void* PMTicketGetThisBoolean(void);
void* PMTicketGetThisCString(void);
void* PMTicketGetThisItem(void);
void* PMTicketGetThisPMRect(void);
void* PMTicketGetThisSInt32(void);
void* PMTicketGetThisTypedItem(void);
void* PMTicketGetTicket(void);
void* PMTicketGetType(void);
void* PMTicketGetUInt32(void);
void* PMTicketGetUTF8String(void);
void* PMTicketReadXMLFromCFURLRef(void);
void* PMTicketReadXMLFromFile(void);
void* PMTicketRelease(void);
void* PMTicketReleaseAndClear(void);
void* PMTicketReleaseItem(void);
void* PMTicketRemoveTicket(void);
void* PMTicketRetain(void);
void* PMTicketSetBoolean(void);
void* PMTicketSetBytes(void);
void* PMTicketSetCFArray(void);
void* PMTicketSetCFBoolean(void);
void* PMTicketSetCFData(void);
void* PMTicketSetCFDate(void);
void* PMTicketSetCFDictionary(void);
void* PMTicketSetCFNumber(void);
void* PMTicketSetCFString(void);
void* PMTicketSetCString(void);
void* PMTicketSetCStringArray(void);
void* PMTicketSetDouble(void);
void* PMTicketSetDoubleArray(void);
void* PMTicketSetItem(void);
void* PMTicketSetPMRect(void);
void* PMTicketSetPMRectArray(void);
void* PMTicketSetPMResolution(void);
void* PMTicketSetPMResolutionArray(void);
void* PMTicketSetPString(void);
void* PMTicketSetSInt32(void);
void* PMTicketSetSInt32Array(void);
void* PMTicketSetTemplate(void);
void* PMTicketSetTicket(void);
void* PMTicketSetUInt32(void);
void* PMTicketSetUInt32Array(void);
void* PMTicketToLightXML(void);
void* PMTicketToXML(void);
void* PMTicketValidate(void);
void* PMTicketWriteXML(void);
void* PMTicketWriteXMLToFile(void);
void* PMUnflattenPageFormatWithCFData(void);
void* PMUnflattenPageFormatWithURL(void);
void* PMUnflattenPrintSettingsWithCFData(void);
void* PMUnflattenPrintSettingsWithURL(void);
void* PMUpdateProxy(void);
void* PMWorkflowCopyItems(void);
void* PMWorkflowSubmitPDFWithOptions(void);
void* PMWorkflowSubmitPDFWithSettings(void);
void* PMWriteCFDataToFile(void);
void* PMXMLToTicket(void);
void* PMfprintf(void);
void* _ZN12PMBaseObject14SetAppReadOnlyEh(void);
void* _ZN12PMBaseObject15CopyObjectStateEPS_(void);
void* _ZN12PMBaseObject16CreateEmptyArrayEv(void);
void* _ZN14OpaquePMPresetC1EPK14__CFDictionary(void);
void* _ZN14OpaquePMPresetC2EPK14__CFDictionary(void);
void* _ZN15OpaquePMPrinter14GetPrinterNameEv(void);
void* _ZN15OpaquePMPrinter14IsQueueStoppedEv(void);
void* _ZN15OpaquePMPrinter16IsGenericPrinterEv(void);
void* _ZN15OpaquePMPrinter19GetPaperListForMenuEv(void);
void* _ZN15OpaquePMPrinter19SetPaperListForMenuEPK9__CFArray(void);
void* _ZN15OpaquePMPrinter22IsPrinterDirectConnectEv(void);
void* _ZN18OpaquePMPageFormat21PJCValidPageFormatKeyEPS_(void);
void* _ZN18PMTicketBaseObject12GetTicketRefEv(void);
void* _ZN18PMTicketBaseObject12SetTicketRefEP17OpaquePMTicketRef(void);
void* _ZN18PMTicketBaseObject23ReleaseAndReplaceTicketEP17OpaquePMTicketRef(void);
void* _ZN20OpaquePMPrintSession10ClearErrorEv(void);
void* _ZN20OpaquePMPrintSession10SetPreviewEhj(void);
void* _ZN20OpaquePMPrintSession12GetJobTicketEv(void);
void* _ZN20OpaquePMPrintSession16GetSheetDoneProcEv(void);
void* _ZN20OpaquePMPrintSession16GetXPCConnectionEv(void);
void* _ZN20OpaquePMPrintSession16SetSheetDoneProcEPFvPS_P15OpaqueWindowPtrhE(void);
void* _ZN20OpaquePMPrintSession16SetXPCConnectionEPU24objcproto13OS_xpc_object8NSObject(void);
void* _ZN20OpaquePMPrintSession17GetCurrentPrinterEv(void);
void* _ZN20OpaquePMPrintSession17GetDocumentWindowEv(void);
void* _ZN20OpaquePMPrintSession17SetCurrentPrinterEP15OpaquePMPrinter(void);
void* _ZN20OpaquePMPrintSession17SetCurrentPrinterEP15OpaquePMPrinterh(void);
void* _ZN20OpaquePMPrintSession17SetDocumentWindowEP15OpaqueWindowPtr(void);
void* _ZN20OpaquePMPrintSession19SetDataInDictionaryEPK10__CFStringPKv(void);
void* _ZN20OpaquePMPrintSession21GetEnablePresetsPopUpEv(void);
void* _ZN20OpaquePMPrintSession21GetPresetGraphicsTypeEv(void);
void* _ZN20OpaquePMPrintSession21SetPresetGraphicsTypeEPK10__CFString(void);
void* _ZN20OpaquePMPrintSession23PJCValidPrintSessionKeyEPS_(void);
void* _ZN20OpaquePMPrintSession24GetDefaultButtonTitleRefEv(void);
void* _ZN20OpaquePMPrintSession25GetPrintingDialogTitleRefEv(void);
void* _ZN20OpaquePMPrintSession7PreviewEv(void);
void* _ZN20OpaquePMPrintSession8GetErrorEv(void);
void* _ZN20OpaquePMPrintSession8GetStateEv(void);
void* _ZN20OpaquePMPrintSession8SetErrorEi(void);
void* _ZN21OpaquePMPrintSettings14PJCGetLastPageEPj(void);
void* _ZN21OpaquePMPrintSettings14PJCSetLastPageEP17OpaquePMTicketRefjhh(void);
void* _ZN21OpaquePMPrintSettings14PJCSetLastPageEjhh(void);
void* _ZN21OpaquePMPrintSettings15PJCGetFirstPageEPj(void);
void* _ZN21OpaquePMPrintSettings17PJCGetDestinationEPtPPK7__CFURL(void);
void* _ZN21OpaquePMPrintSettings17PJCSetDestinationEtPK7__CFURL(void);
void* _ZN21OpaquePMPrintSettings24PJCValidPrintSettingsKeyEPS_(void);
void* getCurrentMonochromeProfileID(void);
void* getMatchedMediaNameFromPrinter(void);
void* getMediaNameFromPaperInfo(void);
void* getPDFSpoolingFunctionCallbacks(void);
void* parsePostScriptStatus(void);
void* printUIToolAuthenticateJob(void);
void* printUIToolCreateConnection(void);
void* printUIToolGetAuthenticationInfo(void);
void* printUIToolPrintFD(void);

#endif
