/*
 * cocoshop
 *
 * Copyright (c) 2011 Andrew
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#import <Cocoa/Cocoa.h>

@interface CSSideViewController : NSObject
{
	IBOutlet NSView *rightSideView_;
	
	IBOutlet NSView *generalPropertiesTab_;
	IBOutlet NSView *generalPropertiesView_;
	
	IBOutlet NSView *nodePropertiesTab_;
	IBOutlet NSView *nodePropertiesView_;
	
	IBOutlet NSView *spritePropertiesTab_;
	IBOutlet NSView *spritePropertiesView_;
	
	IBOutlet NSView *backgroundPropertiesTab_;
	IBOutlet NSView *backgroundPropertiesView_;
}

@property(nonatomic, readonly) NSView *generalPropertiesTab;
@property(nonatomic, readonly) NSView *generalPropertiesView;
@property(nonatomic, readonly) NSView *nodePropertiesTab;
@property(nonatomic, readonly) NSView *nodePropertiesView;
@property(nonatomic, readonly) NSView *spritePropertiesTab;
@property(nonatomic, readonly) NSView *spritePropertiesView;
@property(nonatomic, readonly) NSView *backgroundPropertiesTab;
@property(nonatomic, readonly) NSView *backgroundPropertiesView;

- (void)alignItems:(NSArray *)item, ... NS_REQUIRES_NIL_TERMINATION;

@end