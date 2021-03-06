/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMULinkedListEntry;



@interface VMULinkedList : NSObject 
{
    VMULinkedListEntry *_head;
    VMULinkedListEntry *_tail;
}

+ (id)linkedList;

- (id)init;
- (id)head;
- (id)tail;
- (void)removeAllObjects;
- (void)pushHead:(id)arg1;
- (id)popTail;
- (void)remove:(id)arg1;

@end
