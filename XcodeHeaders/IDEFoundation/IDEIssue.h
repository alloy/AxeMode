/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEDiagnosticItemDelegate.h"

@class DVTDocumentLocation, IDEActivityLogMessage, IDEActivityLogRecord, IDEIssueProvider, NSArray, NSNumber, NSString;

@interface IDEIssue : NSObject <IDEDiagnosticItemDelegate>
{
    IDEIssueProvider *_issueProvider;
    NSArray *_documentLocations;
    NSObject *_issueTypeIdentifier;
    NSString *_fullMessage;
    unsigned long long _severity;
    unsigned long long _sequenceNumber;
    NSArray *_subissues;
    IDEActivityLogMessage *_representedMessage;
    IDEActivityLogMessage *_originatingMessage;
    IDEActivityLogRecord *_originatingLogRecord;
    IDEIssue *_parentIssue;
    int _issueType;
    NSNumber *_lineNumber;
    BOOL _frozen;
    BOOL _valid;
    BOOL _coalesced;
    BOOL _wasFetchedFromCache;
    BOOL _vended;
    NSArray *_filteredSubissues;
    DVTDocumentLocation *_primaryDocumentLocation;
}

- (void).cxx_destruct;
- (id)_firstCommonLocationFromArray:(id)arg1 andArray:(id)arg2;
- (void)_freeze;
@property(getter=_isCoalesced) BOOL _coalesced; // @synthesize _coalesced;
@property(getter=_isVended) BOOL _vended; // @synthesize _vended;
@property(readonly) NSNumber *_lineNumber; // @synthesize _lineNumber;
@property(retain) IDEIssue *_parentIssue;
- (void)_setRepresentedMessage:(id)arg1 force:(BOOL)arg2;
- (void)_setSequenceNumber:(unsigned long long)arg1;
- (void)_setSubissues:(id)arg1 force:(BOOL)arg2;
- (id)_severityString;
- (long long)compare:(id)arg1;
- (long long)compareByLineNumber:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)diagnosticItemWasFixed:(id)arg1;
@property(readonly) NSArray *documentLocations; // @synthesize documentLocations=_documentLocations;
@property(readonly) NSArray *filteredSubissues; // @synthesize filteredSubissues=_filteredSubissues;
@property(readonly) NSArray *fixableDiagnosticItems;
@property(readonly) NSString *formattedStringRepresentation;
@property(readonly) NSString *fullMessage; // @synthesize fullMessage=_fullMessage;
- (id)init;
- (id)initWithIssueProvider:(id)arg1 documentLocations:(id)arg2 issueTypeIdentifier:(id)arg3 fullMessage:(id)arg4 severity:(unsigned long long)arg5 representedMessage:(id)arg6;
- (id)initWithIssueProvider:(id)arg1 message:(id)arg2 originatingLogRecord:(id)arg3 wasFetchedFromCache:(BOOL)arg4;
- (id)initWithIssueProvider:(id)arg1 message:(id)arg2 wasFetchedFromCache:(BOOL)arg3;
- (BOOL)isEqualDisregardingLocationTimestamps:(id)arg1;
@property(readonly) BOOL isLiveIssue;
@property(retain, nonatomic) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) int issueType; // @synthesize issueType=_issueType;
@property(retain) NSObject *issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(readonly) IDEActivityLogRecord *originatingLogRecord; // @synthesize originatingLogRecord=_originatingLogRecord;
@property(readonly) IDEActivityLogMessage *originatingMessage; // @synthesize originatingMessage=_originatingMessage;
@property(readonly) __weak IDEIssue *parentIssue; // @synthesize parentIssue=_parentIssue;
@property(readonly) DVTDocumentLocation *primaryDocumentLocation; // @synthesize primaryDocumentLocation=_primaryDocumentLocation;
@property(readonly, nonatomic) IDEIssue *representativeSubIssue;
@property(retain, nonatomic) IDEActivityLogMessage *representedMessage; // @synthesize representedMessage=_representedMessage;
@property(readonly) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(copy, nonatomic) NSArray *subissues; // @synthesize subissues=_subissues;
@property BOOL valid; // @synthesize valid=_valid;
@property BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(readonly) unsigned long long severity; // @synthesize severity=_severity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

