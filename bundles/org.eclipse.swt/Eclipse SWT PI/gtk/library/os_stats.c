/*******************************************************************************
* Copyright (c) 2000, 2005 IBM Corporation and others. All rights reserved.
* The contents of this file are made available under the terms
* of the GNU Lesser General Public License (LGPL) Version 2.1 that
* accompanies this distribution (lgpl-v21.txt).  The LGPL is also
* available at http://www.gnu.org/licenses/lgpl.html.  If the version
* of the LGPL at http://www.gnu.org is different to the version of
* the LGPL accompanying this distribution and there is any conflict
* between the two license versions, the terms of the LGPL accompanying
* this distribution shall govern.
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

int OS_nativeFunctionCount = 1102;
int OS_nativeFunctionCallCount[1102];
char * OS_nativeFunctionNames[] = {
	"Call",
	"GDK_1EVENT_1TYPE",
	"GDK_1EVENT_1WINDOW",
	"GDK_1WINDOWING_1X11",
	"GInterfaceInfo_1sizeof",
	"GPollFD_1sizeof",
	"GTK_1ACCEL_1LABEL_1GET_1ACCEL_1STRING",
	"GTK_1ACCEL_1LABEL_1SET_1ACCEL_1STRING",
	"GTK_1ENTRY_1IM_1CONTEXT",
	"GTK_1SCROLLED_1WINDOW_1HSCROLLBAR",
	"GTK_1SCROLLED_1WINDOW_1SCROLLBAR_1SPACING",
	"GTK_1SCROLLED_1WINDOW_1VSCROLLBAR",
	"GTK_1TEXTVIEW_1IM_1CONTEXT",
	"GTK_1TOOLTIPS_1SET_1ACTIVE",
	"GTK_1TOOLTIPS_1TIP_1WINDOW",
	"GTK_1WIDGET_1HEIGHT",
	"GTK_1WIDGET_1REQUISITION_1HEIGHT",
	"GTK_1WIDGET_1REQUISITION_1WIDTH",
	"GTK_1WIDGET_1SET_1HEIGHT",
	"GTK_1WIDGET_1SET_1WIDTH",
	"GTK_1WIDGET_1SET_1X",
	"GTK_1WIDGET_1SET_1Y",
	"GTK_1WIDGET_1WIDTH",
	"GTK_1WIDGET_1WINDOW",
	"GTK_1WIDGET_1X",
	"GTK_1WIDGET_1Y",
	"GTypeInfo_1sizeof",
	"GTypeQuery_1sizeof",
	"GdkColor_1sizeof",
	"GdkDragContext_1sizeof",
	"GdkEventAny_1sizeof",
	"GdkEventButton_1sizeof",
	"GdkEventCrossing_1sizeof",
	"GdkEventExpose_1sizeof",
	"GdkEventFocus_1sizeof",
	"GdkEventKey_1sizeof",
	"GdkEventMotion_1sizeof",
	"GdkEventScroll_1sizeof",
	"GdkEventVisibility_1sizeof",
	"GdkEventWindowState_1sizeof",
	"GdkEvent_1sizeof",
	"GdkGCValues_1sizeof",
	"GdkGeometry_1sizeof",
	"GdkImage_1sizeof",
	"GdkRectangle_1sizeof",
	"GdkVisual_1sizeof",
	"GdkWindowAttr_1sizeof",
	"GtkAdjustment_1sizeof",
	"GtkAllocation_1sizeof",
	"GtkBorder_1sizeof",
	"GtkCellRendererPixbufClass_1sizeof",
	"GtkCellRendererPixbuf_1sizeof",
	"GtkCellRendererTextClass_1sizeof",
	"GtkCellRendererText_1sizeof",
	"GtkCellRendererToggleClass_1sizeof",
	"GtkCellRendererToggle_1sizeof",
	"GtkColorSelectionDialog_1sizeof",
	"GtkCombo_1sizeof",
	"GtkFileSelection_1sizeof",
	"GtkFixedClass_1sizeof",
	"GtkFixed_1sizeof",
	"GtkRequisition_1sizeof",
	"GtkSelectionData_1sizeof",
	"GtkTargetEntry_1sizeof",
	"GtkTargetPair_1sizeof",
	"GtkTextIter_1sizeof",
	"GtkTreeIter_1sizeof",
	"PTR_1sizeof",
	"PangoAttribute_1sizeof",
	"PangoItem_1sizeof",
	"PangoLayoutLine_1sizeof",
	"PangoLayoutRun_1sizeof",
	"PangoLogAttr_1sizeof",
	"PangoRectangle_1sizeof",
	"XAnyEvent_1sizeof",
	"XButtonEvent_1sizeof",
	"XClientMessageEvent_1sizeof",
	"XCrossingEvent_1sizeof",
	"XEvent_1sizeof",
	"XExposeEvent_1sizeof",
	"XFocusChangeEvent_1sizeof",
	"XRenderPictureAttributes_1sizeof",
	"XVisibilityEvent_1sizeof",
	"XWindowChanges_1sizeof",
	"X_1EVENT_1TYPE",
	"X_1EVENT_1WINDOW",
	"_1Call",
	"_1GDK_1DISPLAY",
	"_1GDK_1PIXMAP_1XID",
	"_1GDK_1ROOT_1PARENT",
	"_1GDK_1TYPE_1COLOR",
	"_1GDK_1TYPE_1PIXBUF",
	"_1GTK_1IS_1BUTTON",
	"_1GTK_1IS_1CELL_1RENDERER_1PIXBUF",
	"_1GTK_1IS_1CELL_1RENDERER_1TEXT",
	"_1GTK_1IS_1CELL_1RENDERER_1TOGGLE",
	"_1GTK_1IS_1CONTAINER",
	"_1GTK_1IS_1IMAGE_1MENU_1ITEM",
	"_1GTK_1IS_1PLUG",
	"_1GTK_1STOCK_1CANCEL",
	"_1GTK_1STOCK_1OK",
	"_1GTK_1TYPE_1CELL_1RENDERER_1PIXBUF",
	"_1GTK_1TYPE_1CELL_1RENDERER_1TEXT",
	"_1GTK_1TYPE_1CELL_1RENDERER_1TOGGLE",
	"_1GTK_1TYPE_1FIXED",
	"_1GTK_1TYPE_1WIDGET",
	"_1GTK_1WIDGET_1FLAGS",
	"_1GTK_1WIDGET_1HAS_1DEFAULT",
	"_1GTK_1WIDGET_1HAS_1FOCUS",
	"_1GTK_1WIDGET_1IS_1SENSITIVE",
	"_1GTK_1WIDGET_1MAPPED",
	"_1GTK_1WIDGET_1SENSITIVE",
	"_1GTK_1WIDGET_1SET_1FLAGS",
	"_1GTK_1WIDGET_1STATE",
	"_1GTK_1WIDGET_1UNSET_1FLAGS",
	"_1GTK_1WIDGET_1VISIBLE",
	"_1G_1OBJECT_1CLASS",
	"_1G_1OBJECT_1GET_1CLASS",
	"_1G_1OBJECT_1TYPE",
	"_1G_1TYPE_1BOOLEAN",
	"_1G_1TYPE_1INT",
	"_1G_1TYPE_1STRING",
	"_1PANGO_1PIXELS",
	"_1PANGO_1TYPE_1FONT_1DESCRIPTION",
	"_1XCheckIfEvent",
	"_1XCheckMaskEvent",
	"_1XCheckWindowEvent",
	"_1XDefaultRootWindow",
	"_1XDefaultScreen",
	"_1XFlush",
	"_1XFree",
	"_1XGetSelectionOwner",
	"_1XInternAtom",
	"_1XKeysymToKeycode",
	"_1XListProperties",
	"_1XQueryTree",
	"_1XReconfigureWMWindow",
	"_1XRenderComposite",
	"_1XRenderCreatePicture",
	"_1XRenderFindStandardFormat",
	"_1XRenderFindVisualFormat",
	"_1XRenderFreePicture",
	"_1XRenderQueryExtension",
	"_1XRenderSetPictureClipRectangles",
	"_1XRenderSetPictureTransform",
	"_1XSendEvent",
	"_1XSetErrorHandler",
	"_1XSetIOErrorHandler",
	"_1XSetInputFocus",
	"_1XSynchronize",
	"_1XTestFakeButtonEvent",
	"_1XTestFakeKeyEvent",
	"_1XTestFakeMotionEvent",
	"_1XWarpPointer",
	"_1atk_1object_1add_1relationship",
	"_1call",
	"_1dlclose",
	"_1dlopen",
	"_1dlsym",
	"_1g_1cclosure_1new",
	"_1g_1closure_1ref",
	"_1g_1closure_1unref",
	"_1g_1filename_1from_1uri",
	"_1g_1filename_1from_1utf8",
	"_1g_1filename_1to_1uri",
	"_1g_1filename_1to_1utf8",
	"_1g_1free",
	"_1g_1list_1append",
	"_1g_1list_1data",
	"_1g_1list_1free",
	"_1g_1list_1free_11",
	"_1g_1list_1length",
	"_1g_1list_1next",
	"_1g_1list_1nth",
	"_1g_1list_1nth_1data",
	"_1g_1list_1prepend",
	"_1g_1list_1previous",
	"_1g_1list_1remove_1link",
	"_1g_1list_1reverse",
	"_1g_1list_1set_1next",
	"_1g_1list_1set_1previous",
	"_1g_1locale_1from_1utf8",
	"_1g_1locale_1to_1utf8",
	"_1g_1log_1default_1handler",
	"_1g_1log_1remove_1handler",
	"_1g_1log_1set_1handler",
	"_1g_1main_1context_1acquire",
	"_1g_1main_1context_1check",
	"_1g_1main_1context_1default",
	"_1g_1main_1context_1get_1poll_1func",
	"_1g_1main_1context_1iteration",
	"_1g_1main_1context_1pending",
	"_1g_1main_1context_1prepare",
	"_1g_1main_1context_1query",
	"_1g_1main_1context_1release",
	"_1g_1malloc",
	"_1g_1object_1get",
	"_1g_1object_1get_1qdata",
	"_1g_1object_1new",
	"_1g_1object_1ref",
	"_1g_1object_1set__I_3BFI",
	"_1g_1object_1set__I_3BII",
	"_1g_1object_1set__I_3BJI",
	"_1g_1object_1set__I_3BZI",
	"_1g_1object_1set_1qdata",
	"_1g_1object_1unref",
	"_1g_1quark_1from_1string",
	"_1g_1set_1prgname",
	"_1g_1signal_1connect",
	"_1g_1signal_1connect_1after",
	"_1g_1signal_1connect_1closure",
	"_1g_1signal_1connect_1closure_1by_1id",
	"_1g_1signal_1emit_1by_1name__I_3B",
	"_1g_1signal_1emit_1by_1name__I_3BI",
	"_1g_1signal_1emit_1by_1name__I_3BII",
	"_1g_1signal_1emit_1by_1name__I_3B_3B",
	"_1g_1signal_1handler_1disconnect",
	"_1g_1signal_1handlers_1block_1matched",
	"_1g_1signal_1handlers_1disconnect_1matched",
	"_1g_1signal_1handlers_1unblock_1matched",
	"_1g_1signal_1lookup",
	"_1g_1signal_1stop_1emission_1by_1name",
	"_1g_1slist_1data",
	"_1g_1slist_1free",
	"_1g_1slist_1length",
	"_1g_1slist_1next",
	"_1g_1strfreev",
	"_1g_1thread_1init",
	"_1g_1thread_1supported",
	"_1g_1type_1add_1interface_1static",
	"_1g_1type_1class_1peek",
	"_1g_1type_1class_1peek_1parent",
	"_1g_1type_1from_1name",
	"_1g_1type_1interface_1peek_1parent",
	"_1g_1type_1is_1a",
	"_1g_1type_1name",
	"_1g_1type_1parent",
	"_1g_1type_1query",
	"_1g_1type_1register_1static",
	"_1g_1utf16_1to_1utf8",
	"_1g_1utf8_1offset_1to_1pointer",
	"_1g_1utf8_1pointer_1to_1offset",
	"_1g_1utf8_1strlen",
	"_1g_1utf8_1to_1utf16__II_3I_3I_3I",
	"_1g_1utf8_1to_1utf16___3BI_3I_3I_3I",
	"_1gdk_1atom_1intern",
	"_1gdk_1atom_1name",
	"_1gdk_1beep",
	"_1gdk_1bitmap_1create_1from_1data",
	"_1gdk_1color_1white",
	"_1gdk_1colormap_1alloc_1color",
	"_1gdk_1colormap_1free_1colors",
	"_1gdk_1colormap_1get_1system",
	"_1gdk_1colormap_1query_1color",
	"_1gdk_1cursor_1destroy",
	"_1gdk_1cursor_1new",
	"_1gdk_1cursor_1new_1from_1pixmap",
	"_1gdk_1drag_1status",
	"_1gdk_1draw_1arc",
	"_1gdk_1draw_1drawable",
	"_1gdk_1draw_1image",
	"_1gdk_1draw_1layout",
	"_1gdk_1draw_1layout_1with_1colors",
	"_1gdk_1draw_1line",
	"_1gdk_1draw_1lines",
	"_1gdk_1draw_1pixbuf",
	"_1gdk_1draw_1point",
	"_1gdk_1draw_1polygon",
	"_1gdk_1draw_1rectangle",
	"_1gdk_1drawable_1get_1depth",
	"_1gdk_1drawable_1get_1image",
	"_1gdk_1drawable_1get_1size",
	"_1gdk_1drawable_1get_1visible_1region",
	"_1gdk_1error_1trap_1pop",
	"_1gdk_1error_1trap_1push",
	"_1gdk_1event_1copy",
	"_1gdk_1event_1free",
	"_1gdk_1event_1get",
	"_1gdk_1event_1get_1coords",
	"_1gdk_1event_1get_1graphics_1expose",
	"_1gdk_1event_1get_1root_1coords",
	"_1gdk_1event_1get_1state",
	"_1gdk_1event_1get_1time",
	"_1gdk_1event_1handler_1set",
	"_1gdk_1event_1put",
	"_1gdk_1flush",
	"_1gdk_1free_1text_1list",
	"_1gdk_1gc_1get_1values",
	"_1gdk_1gc_1new",
	"_1gdk_1gc_1set_1background",
	"_1gdk_1gc_1set_1clip_1mask",
	"_1gdk_1gc_1set_1clip_1origin",
	"_1gdk_1gc_1set_1clip_1rectangle",
	"_1gdk_1gc_1set_1clip_1region",
	"_1gdk_1gc_1set_1dashes",
	"_1gdk_1gc_1set_1exposures",
	"_1gdk_1gc_1set_1fill",
	"_1gdk_1gc_1set_1foreground",
	"_1gdk_1gc_1set_1function",
	"_1gdk_1gc_1set_1line_1attributes",
	"_1gdk_1gc_1set_1stipple",
	"_1gdk_1gc_1set_1subwindow",
	"_1gdk_1gc_1set_1tile",
	"_1gdk_1gc_1set_1ts_1origin",
	"_1gdk_1gc_1set_1values",
	"_1gdk_1keyboard_1ungrab",
	"_1gdk_1keymap_1get_1default",
	"_1gdk_1keymap_1translate_1keyboard_1state",
	"_1gdk_1keyval_1to_1lower",
	"_1gdk_1keyval_1to_1unicode",
	"_1gdk_1pango_1context_1get",
	"_1gdk_1pango_1context_1set_1colormap",
	"_1gdk_1pango_1layout_1get_1clip_1region",
	"_1gdk_1pixbuf_1copy_1area",
	"_1gdk_1pixbuf_1get_1from_1drawable",
	"_1gdk_1pixbuf_1get_1has_1alpha",
	"_1gdk_1pixbuf_1get_1height",
	"_1gdk_1pixbuf_1get_1pixels",
	"_1gdk_1pixbuf_1get_1rowstride",
	"_1gdk_1pixbuf_1get_1width",
	"_1gdk_1pixbuf_1new",
	"_1gdk_1pixbuf_1new_1from_1file",
	"_1gdk_1pixbuf_1render_1pixmap_1and_1mask",
	"_1gdk_1pixbuf_1render_1to_1drawable",
	"_1gdk_1pixbuf_1render_1to_1drawable_1alpha",
	"_1gdk_1pixbuf_1scale",
	"_1gdk_1pixbuf_1scale_1simple",
	"_1gdk_1pixmap_1foreign_1new",
	"_1gdk_1pixmap_1new",
	"_1gdk_1pointer_1grab",
	"_1gdk_1pointer_1is_1grabbed",
	"_1gdk_1pointer_1ungrab",
	"_1gdk_1property_1get",
	"_1gdk_1region_1destroy",
	"_1gdk_1region_1empty",
	"_1gdk_1region_1get_1clipbox",
	"_1gdk_1region_1get_1rectangles",
	"_1gdk_1region_1intersect",
	"_1gdk_1region_1new",
	"_1gdk_1region_1offset",
	"_1gdk_1region_1point_1in",
	"_1gdk_1region_1polygon",
	"_1gdk_1region_1rect_1in",
	"_1gdk_1region_1rectangle",
	"_1gdk_1region_1subtract",
	"_1gdk_1region_1union",
	"_1gdk_1region_1union_1with_1rect",
	"_1gdk_1rgb_1init",
	"_1gdk_1screen_1get_1default",
	"_1gdk_1screen_1get_1monitor_1at_1window",
	"_1gdk_1screen_1get_1monitor_1geometry",
	"_1gdk_1screen_1get_1n_1monitors",
	"_1gdk_1screen_1get_1number",
	"_1gdk_1screen_1height",
	"_1gdk_1screen_1width",
	"_1gdk_1screen_1width_1mm",
	"_1gdk_1set_1program_1class",
	"_1gdk_1text_1property_1to_1utf8_1list",
	"_1gdk_1unicode_1to_1keyval",
	"_1gdk_1utf8_1to_1compound_1text",
	"_1gdk_1utf8_1to_1string_1target",
	"_1gdk_1visual_1get_1system",
	"_1gdk_1window_1add_1filter",
	"_1gdk_1window_1at_1pointer",
	"_1gdk_1window_1begin_1paint_1rect",
	"_1gdk_1window_1clear_1area",
	"_1gdk_1window_1destroy",
	"_1gdk_1window_1end_1paint",
	"_1gdk_1window_1focus",
	"_1gdk_1window_1freeze_1updates",
	"_1gdk_1window_1get_1children",
	"_1gdk_1window_1get_1events",
	"_1gdk_1window_1get_1frame_1extents",
	"_1gdk_1window_1get_1internal_1paint_1info",
	"_1gdk_1window_1get_1origin",
	"_1gdk_1window_1get_1parent",
	"_1gdk_1window_1get_1pointer",
	"_1gdk_1window_1get_1user_1data",
	"_1gdk_1window_1hide",
	"_1gdk_1window_1invalidate_1rect",
	"_1gdk_1window_1invalidate_1region",
	"_1gdk_1window_1lookup",
	"_1gdk_1window_1lower",
	"_1gdk_1window_1move",
	"_1gdk_1window_1new",
	"_1gdk_1window_1process_1all_1updates",
	"_1gdk_1window_1process_1updates",
	"_1gdk_1window_1raise",
	"_1gdk_1window_1remove_1filter",
	"_1gdk_1window_1resize",
	"_1gdk_1window_1scroll",
	"_1gdk_1window_1set_1accept_1focus",
	"_1gdk_1window_1set_1back_1pixmap",
	"_1gdk_1window_1set_1cursor",
	"_1gdk_1window_1set_1debug_1updates",
	"_1gdk_1window_1set_1decorations",
	"_1gdk_1window_1set_1events",
	"_1gdk_1window_1set_1icon",
	"_1gdk_1window_1set_1icon_1list",
	"_1gdk_1window_1set_1keep_1above",
	"_1gdk_1window_1set_1override_1redirect",
	"_1gdk_1window_1set_1user_1data",
	"_1gdk_1window_1shape_1combine_1region",
	"_1gdk_1window_1show",
	"_1gdk_1window_1show_1unraised",
	"_1gdk_1window_1thaw_1updates",
	"_1gdk_1x11_1atom_1to_1xatom",
	"_1gdk_1x11_1colormap_1get_1xcolormap",
	"_1gdk_1x11_1drawable_1get_1xdisplay",
	"_1gdk_1x11_1drawable_1get_1xid",
	"_1gdk_1x11_1screen_1get_1window_1manager_1name",
	"_1gdk_1x11_1screen_1lookup_1visual",
	"_1gdk_1x11_1visual_1get_1xvisual",
	"_1gtk_1accel_1group_1new",
	"_1gtk_1accel_1groups_1activate",
	"_1gtk_1accel_1label_1set_1accel_1widget",
	"_1gtk_1adjustment_1changed",
	"_1gtk_1adjustment_1new",
	"_1gtk_1adjustment_1set_1value",
	"_1gtk_1adjustment_1value_1changed",
	"_1gtk_1arrow_1new",
	"_1gtk_1arrow_1set",
	"_1gtk_1bin_1get_1child",
	"_1gtk_1box_1set_1child_1packing",
	"_1gtk_1box_1set_1spacing",
	"_1gtk_1button_1clicked",
	"_1gtk_1button_1get_1relief",
	"_1gtk_1button_1new",
	"_1gtk_1button_1set_1relief",
	"_1gtk_1cell_1renderer_1get_1size",
	"_1gtk_1cell_1renderer_1pixbuf_1new",
	"_1gtk_1cell_1renderer_1text_1new",
	"_1gtk_1cell_1renderer_1toggle_1new",
	"_1gtk_1check_1button_1new",
	"_1gtk_1check_1menu_1item_1get_1active",
	"_1gtk_1check_1menu_1item_1new_1with_1label",
	"_1gtk_1check_1menu_1item_1set_1active",
	"_1gtk_1check_1version",
	"_1gtk_1clipboard_1clear",
	"_1gtk_1clipboard_1get",
	"_1gtk_1clipboard_1set_1with_1data",
	"_1gtk_1clipboard_1wait_1for_1contents",
	"_1gtk_1color_1selection_1dialog_1new",
	"_1gtk_1color_1selection_1get_1current_1color",
	"_1gtk_1color_1selection_1set_1current_1color",
	"_1gtk_1color_1selection_1set_1has_1palette",
	"_1gtk_1combo_1disable_1activate",
	"_1gtk_1combo_1new",
	"_1gtk_1combo_1set_1case_1sensitive",
	"_1gtk_1combo_1set_1popdown_1strings",
	"_1gtk_1container_1add",
	"_1gtk_1container_1forall",
	"_1gtk_1container_1get_1border_1width",
	"_1gtk_1container_1get_1children",
	"_1gtk_1container_1remove",
	"_1gtk_1container_1resize_1children",
	"_1gtk_1container_1set_1border_1width",
	"_1gtk_1dialog_1add_1button",
	"_1gtk_1dialog_1run",
	"_1gtk_1drag_1begin",
	"_1gtk_1drag_1check_1threshold",
	"_1gtk_1drag_1dest_1find_1target",
	"_1gtk_1drag_1dest_1set",
	"_1gtk_1drag_1dest_1unset",
	"_1gtk_1drag_1finish",
	"_1gtk_1drag_1get_1data",
	"_1gtk_1drag_1set_1icon_1pixbuf",
	"_1gtk_1drawing_1area_1new",
	"_1gtk_1editable_1copy_1clipboard",
	"_1gtk_1editable_1cut_1clipboard",
	"_1gtk_1editable_1delete_1selection",
	"_1gtk_1editable_1delete_1text",
	"_1gtk_1editable_1get_1chars",
	"_1gtk_1editable_1get_1editable",
	"_1gtk_1editable_1get_1position",
	"_1gtk_1editable_1get_1selection_1bounds",
	"_1gtk_1editable_1insert_1text",
	"_1gtk_1editable_1paste_1clipboard",
	"_1gtk_1editable_1select_1region",
	"_1gtk_1editable_1set_1editable",
	"_1gtk_1editable_1set_1position",
	"_1gtk_1entry_1get_1invisible_1char",
	"_1gtk_1entry_1get_1layout",
	"_1gtk_1entry_1get_1layout_1offsets",
	"_1gtk_1entry_1get_1max_1length",
	"_1gtk_1entry_1get_1text",
	"_1gtk_1entry_1get_1visibility",
	"_1gtk_1entry_1new",
	"_1gtk_1entry_1set_1activates_1default",
	"_1gtk_1entry_1set_1alignment",
	"_1gtk_1entry_1set_1has_1frame",
	"_1gtk_1entry_1set_1invisible_1char",
	"_1gtk_1entry_1set_1max_1length",
	"_1gtk_1entry_1set_1text",
	"_1gtk_1entry_1set_1visibility",
	"_1gtk_1entry_1text_1index_1to_1layout_1index",
	"_1gtk_1events_1pending",
	"_1gtk_1expander_1get_1expanded",
	"_1gtk_1expander_1get_1label_1widget",
	"_1gtk_1expander_1new",
	"_1gtk_1expander_1set_1expanded",
	"_1gtk_1expander_1set_1label",
	"_1gtk_1expander_1set_1label_1widget",
	"_1gtk_1file_1chooser_1add_1filter",
	"_1gtk_1file_1chooser_1dialog_1new",
	"_1gtk_1file_1chooser_1get_1current_1folder",
	"_1gtk_1file_1chooser_1get_1filename",
	"_1gtk_1file_1chooser_1get_1filenames",
	"_1gtk_1file_1chooser_1set_1current_1folder",
	"_1gtk_1file_1chooser_1set_1current_1name",
	"_1gtk_1file_1chooser_1set_1extra_1widget",
	"_1gtk_1file_1chooser_1set_1filename",
	"_1gtk_1file_1chooser_1set_1select_1multiple",
	"_1gtk_1file_1filter_1add_1pattern",
	"_1gtk_1file_1filter_1new",
	"_1gtk_1file_1filter_1set_1name",
	"_1gtk_1file_1selection_1get_1filename",
	"_1gtk_1file_1selection_1get_1selections",
	"_1gtk_1file_1selection_1hide_1fileop_1buttons",
	"_1gtk_1file_1selection_1new",
	"_1gtk_1file_1selection_1set_1filename",
	"_1gtk_1file_1selection_1set_1select_1multiple",
	"_1gtk_1fixed_1move",
	"_1gtk_1fixed_1new",
	"_1gtk_1fixed_1set_1has_1window",
	"_1gtk_1font_1selection_1dialog_1get_1font_1name",
	"_1gtk_1font_1selection_1dialog_1new",
	"_1gtk_1font_1selection_1dialog_1set_1font_1name",
	"_1gtk_1frame_1get_1label_1widget",
	"_1gtk_1frame_1new",
	"_1gtk_1frame_1set_1label",
	"_1gtk_1frame_1set_1label_1widget",
	"_1gtk_1frame_1set_1shadow_1type",
	"_1gtk_1get_1current_1event",
	"_1gtk_1get_1current_1event_1state",
	"_1gtk_1get_1current_1event_1time",
	"_1gtk_1get_1default_1language",
	"_1gtk_1get_1event_1widget",
	"_1gtk_1grab_1add",
	"_1gtk_1grab_1get_1current",
	"_1gtk_1grab_1remove",
	"_1gtk_1hbox_1new",
	"_1gtk_1hscale_1new",
	"_1gtk_1hscrollbar_1new",
	"_1gtk_1hseparator_1new",
	"_1gtk_1icon_1factory_1lookup_1default",
	"_1gtk_1icon_1set_1render_1icon",
	"_1gtk_1icon_1source_1free",
	"_1gtk_1icon_1source_1new",
	"_1gtk_1icon_1source_1set_1pixbuf",
	"_1gtk_1im_1context_1filter_1keypress",
	"_1gtk_1im_1context_1focus_1in",
	"_1gtk_1im_1context_1focus_1out",
	"_1gtk_1im_1context_1get_1preedit_1string",
	"_1gtk_1im_1context_1get_1type",
	"_1gtk_1im_1context_1reset",
	"_1gtk_1im_1context_1set_1client_1window",
	"_1gtk_1im_1context_1set_1cursor_1location",
	"_1gtk_1im_1multicontext_1append_1menuitems",
	"_1gtk_1im_1multicontext_1new",
	"_1gtk_1image_1menu_1item_1new_1with_1label",
	"_1gtk_1image_1menu_1item_1set_1image",
	"_1gtk_1image_1new",
	"_1gtk_1image_1new_1from_1pixbuf",
	"_1gtk_1image_1new_1from_1pixmap",
	"_1gtk_1image_1set_1from_1pixbuf",
	"_1gtk_1image_1set_1from_1pixmap",
	"_1gtk_1init_1check",
	"_1gtk_1label_1get_1mnemonic_1keyval",
	"_1gtk_1label_1new",
	"_1gtk_1label_1new_1with_1mnemonic",
	"_1gtk_1label_1set_1attributes",
	"_1gtk_1label_1set_1justify",
	"_1gtk_1label_1set_1line_1wrap",
	"_1gtk_1label_1set_1text__II",
	"_1gtk_1label_1set_1text__I_3B",
	"_1gtk_1label_1set_1text_1with_1mnemonic",
	"_1gtk_1list_1append_1items",
	"_1gtk_1list_1clear_1items",
	"_1gtk_1list_1insert_1items",
	"_1gtk_1list_1item_1new_1with_1label",
	"_1gtk_1list_1remove_1items",
	"_1gtk_1list_1select_1item",
	"_1gtk_1list_1store_1append",
	"_1gtk_1list_1store_1clear",
	"_1gtk_1list_1store_1insert",
	"_1gtk_1list_1store_1newv",
	"_1gtk_1list_1store_1remove",
	"_1gtk_1list_1store_1set__IIIII",
	"_1gtk_1list_1store_1set__IIIJI",
	"_1gtk_1list_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I",
	"_1gtk_1list_1store_1set__IIIZI",
	"_1gtk_1list_1store_1set__III_3BI",
	"_1gtk_1list_1unselect_1all",
	"_1gtk_1list_1unselect_1item",
	"_1gtk_1main",
	"_1gtk_1main_1do_1event",
	"_1gtk_1main_1iteration",
	"_1gtk_1major_1version",
	"_1gtk_1menu_1bar_1new",
	"_1gtk_1menu_1item_1remove_1submenu",
	"_1gtk_1menu_1item_1set_1submenu",
	"_1gtk_1menu_1new",
	"_1gtk_1menu_1popdown",
	"_1gtk_1menu_1popup",
	"_1gtk_1menu_1shell_1deactivate",
	"_1gtk_1menu_1shell_1insert",
	"_1gtk_1menu_1shell_1select_1item",
	"_1gtk_1message_1dialog_1new",
	"_1gtk_1micro_1version",
	"_1gtk_1minor_1version",
	"_1gtk_1misc_1set_1alignment",
	"_1gtk_1notebook_1get_1current_1page",
	"_1gtk_1notebook_1get_1scrollable",
	"_1gtk_1notebook_1insert_1page",
	"_1gtk_1notebook_1new",
	"_1gtk_1notebook_1remove_1page",
	"_1gtk_1notebook_1set_1current_1page",
	"_1gtk_1notebook_1set_1scrollable",
	"_1gtk_1notebook_1set_1show_1tabs",
	"_1gtk_1notebook_1set_1tab_1pos",
	"_1gtk_1object_1sink",
	"_1gtk_1paint_1arrow",
	"_1gtk_1paint_1box",
	"_1gtk_1paint_1box_1gap",
	"_1gtk_1paint_1check",
	"_1gtk_1paint_1expander",
	"_1gtk_1paint_1extension",
	"_1gtk_1paint_1flat_1box",
	"_1gtk_1paint_1focus",
	"_1gtk_1paint_1handle",
	"_1gtk_1paint_1hline",
	"_1gtk_1paint_1layout",
	"_1gtk_1paint_1option",
	"_1gtk_1paint_1shadow",
	"_1gtk_1paint_1shadow_1gap",
	"_1gtk_1paint_1slider",
	"_1gtk_1paint_1tab",
	"_1gtk_1paint_1vline",
	"_1gtk_1plug_1get_1id",
	"_1gtk_1plug_1new",
	"_1gtk_1progress_1bar_1new",
	"_1gtk_1progress_1bar_1pulse",
	"_1gtk_1progress_1bar_1set_1fraction",
	"_1gtk_1progress_1bar_1set_1orientation",
	"_1gtk_1radio_1button_1get_1group",
	"_1gtk_1radio_1button_1new",
	"_1gtk_1radio_1menu_1item_1get_1group",
	"_1gtk_1radio_1menu_1item_1new",
	"_1gtk_1radio_1menu_1item_1new_1with_1label",
	"_1gtk_1range_1get_1adjustment",
	"_1gtk_1range_1set_1increments",
	"_1gtk_1range_1set_1inverted",
	"_1gtk_1range_1set_1range",
	"_1gtk_1range_1set_1value",
	"_1gtk_1rc_1parse_1string",
	"_1gtk_1rc_1style_1get_1bg_1pixmap_1name",
	"_1gtk_1rc_1style_1get_1color_1flags",
	"_1gtk_1rc_1style_1set_1bg",
	"_1gtk_1rc_1style_1set_1bg_1pixmap_1name",
	"_1gtk_1rc_1style_1set_1color_1flags",
	"_1gtk_1scale_1set_1digits",
	"_1gtk_1scale_1set_1draw_1value",
	"_1gtk_1scrolled_1window_1add_1with_1viewport",
	"_1gtk_1scrolled_1window_1get_1hadjustment",
	"_1gtk_1scrolled_1window_1get_1policy",
	"_1gtk_1scrolled_1window_1get_1shadow_1type",
	"_1gtk_1scrolled_1window_1get_1vadjustment",
	"_1gtk_1scrolled_1window_1new",
	"_1gtk_1scrolled_1window_1set_1placement",
	"_1gtk_1scrolled_1window_1set_1policy",
	"_1gtk_1scrolled_1window_1set_1shadow_1type",
	"_1gtk_1selection_1data_1free",
	"_1gtk_1selection_1data_1set",
	"_1gtk_1separator_1menu_1item_1new",
	"_1gtk_1set_1locale",
	"_1gtk_1settings_1get_1default",
	"_1gtk_1socket_1get_1id",
	"_1gtk_1socket_1new",
	"_1gtk_1spin_1button_1get_1adjustment",
	"_1gtk_1spin_1button_1get_1digits",
	"_1gtk_1spin_1button_1new",
	"_1gtk_1spin_1button_1set_1digits",
	"_1gtk_1spin_1button_1set_1increments",
	"_1gtk_1spin_1button_1set_1range",
	"_1gtk_1spin_1button_1set_1value",
	"_1gtk_1spin_1button_1set_1wrap",
	"_1gtk_1style_1get_1base",
	"_1gtk_1style_1get_1bg",
	"_1gtk_1style_1get_1bg_1gc",
	"_1gtk_1style_1get_1black",
	"_1gtk_1style_1get_1black_1gc",
	"_1gtk_1style_1get_1dark",
	"_1gtk_1style_1get_1dark_1gc",
	"_1gtk_1style_1get_1fg",
	"_1gtk_1style_1get_1fg_1gc",
	"_1gtk_1style_1get_1font_1desc",
	"_1gtk_1style_1get_1light",
	"_1gtk_1style_1get_1light_1gc",
	"_1gtk_1style_1get_1mid_1gc",
	"_1gtk_1style_1get_1text",
	"_1gtk_1style_1get_1text_1aa_1gc",
	"_1gtk_1style_1get_1text_1gc",
	"_1gtk_1style_1get_1white_1gc",
	"_1gtk_1style_1get_1xthickness",
	"_1gtk_1style_1get_1ythickness",
	"_1gtk_1style_1render_1icon",
	"_1gtk_1target_1list_1new",
	"_1gtk_1target_1list_1unref",
	"_1gtk_1text_1buffer_1copy_1clipboard",
	"_1gtk_1text_1buffer_1cut_1clipboard",
	"_1gtk_1text_1buffer_1delete",
	"_1gtk_1text_1buffer_1get_1bounds",
	"_1gtk_1text_1buffer_1get_1char_1count",
	"_1gtk_1text_1buffer_1get_1end_1iter",
	"_1gtk_1text_1buffer_1get_1insert",
	"_1gtk_1text_1buffer_1get_1iter_1at_1line",
	"_1gtk_1text_1buffer_1get_1iter_1at_1mark",
	"_1gtk_1text_1buffer_1get_1iter_1at_1offset",
	"_1gtk_1text_1buffer_1get_1line_1count",
	"_1gtk_1text_1buffer_1get_1selection_1bound",
	"_1gtk_1text_1buffer_1get_1selection_1bounds",
	"_1gtk_1text_1buffer_1get_1text",
	"_1gtk_1text_1buffer_1insert__II_3BI",
	"_1gtk_1text_1buffer_1insert__I_3B_3BI",
	"_1gtk_1text_1buffer_1move_1mark",
	"_1gtk_1text_1buffer_1paste_1clipboard",
	"_1gtk_1text_1buffer_1place_1cursor",
	"_1gtk_1text_1buffer_1set_1text",
	"_1gtk_1text_1iter_1get_1line",
	"_1gtk_1text_1iter_1get_1offset",
	"_1gtk_1text_1view_1buffer_1to_1window_1coords",
	"_1gtk_1text_1view_1get_1buffer",
	"_1gtk_1text_1view_1get_1editable",
	"_1gtk_1text_1view_1get_1iter_1at_1location",
	"_1gtk_1text_1view_1get_1iter_1location",
	"_1gtk_1text_1view_1get_1line_1at_1y",
	"_1gtk_1text_1view_1get_1visible_1rect",
	"_1gtk_1text_1view_1get_1window",
	"_1gtk_1text_1view_1new",
	"_1gtk_1text_1view_1scroll_1mark_1onscreen",
	"_1gtk_1text_1view_1scroll_1to_1iter",
	"_1gtk_1text_1view_1set_1editable",
	"_1gtk_1text_1view_1set_1justification",
	"_1gtk_1text_1view_1set_1tabs",
	"_1gtk_1text_1view_1set_1wrap_1mode",
	"_1gtk_1text_1view_1window_1to_1buffer_1coords",
	"_1gtk_1timeout_1add",
	"_1gtk_1timeout_1remove",
	"_1gtk_1toggle_1button_1get_1active",
	"_1gtk_1toggle_1button_1new",
	"_1gtk_1toggle_1button_1set_1active",
	"_1gtk_1toggle_1button_1set_1mode",
	"_1gtk_1toolbar_1insert_1widget",
	"_1gtk_1toolbar_1new",
	"_1gtk_1toolbar_1set_1orientation",
	"_1gtk_1tooltips_1data_1get",
	"_1gtk_1tooltips_1disable",
	"_1gtk_1tooltips_1enable",
	"_1gtk_1tooltips_1force_1window",
	"_1gtk_1tooltips_1new",
	"_1gtk_1tooltips_1set_1tip",
	"_1gtk_1tree_1model_1get__III_3II",
	"_1gtk_1tree_1model_1get__III_3JI",
	"_1gtk_1tree_1model_1get_1iter",
	"_1gtk_1tree_1model_1get_1iter_1first",
	"_1gtk_1tree_1model_1get_1n_1columns",
	"_1gtk_1tree_1model_1get_1path",
	"_1gtk_1tree_1model_1get_1type",
	"_1gtk_1tree_1model_1iter_1children",
	"_1gtk_1tree_1model_1iter_1n_1children",
	"_1gtk_1tree_1model_1iter_1next",
	"_1gtk_1tree_1model_1iter_1nth_1child",
	"_1gtk_1tree_1path_1append_1index",
	"_1gtk_1tree_1path_1compare",
	"_1gtk_1tree_1path_1down",
	"_1gtk_1tree_1path_1free",
	"_1gtk_1tree_1path_1get_1depth",
	"_1gtk_1tree_1path_1get_1indices",
	"_1gtk_1tree_1path_1new",
	"_1gtk_1tree_1path_1new_1first",
	"_1gtk_1tree_1path_1new_1from_1string__I",
	"_1gtk_1tree_1path_1new_1from_1string___3B",
	"_1gtk_1tree_1path_1next",
	"_1gtk_1tree_1path_1prev",
	"_1gtk_1tree_1path_1up",
	"_1gtk_1tree_1selection_1count_1selected_1rows",
	"_1gtk_1tree_1selection_1get_1selected",
	"_1gtk_1tree_1selection_1get_1selected_1rows",
	"_1gtk_1tree_1selection_1path_1is_1selected",
	"_1gtk_1tree_1selection_1select_1all",
	"_1gtk_1tree_1selection_1select_1iter",
	"_1gtk_1tree_1selection_1selected_1foreach",
	"_1gtk_1tree_1selection_1set_1mode",
	"_1gtk_1tree_1selection_1unselect_1all",
	"_1gtk_1tree_1selection_1unselect_1iter",
	"_1gtk_1tree_1store_1append",
	"_1gtk_1tree_1store_1clear",
	"_1gtk_1tree_1store_1insert",
	"_1gtk_1tree_1store_1newv",
	"_1gtk_1tree_1store_1remove",
	"_1gtk_1tree_1store_1set__IIIII",
	"_1gtk_1tree_1store_1set__IIIJI",
	"_1gtk_1tree_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I",
	"_1gtk_1tree_1store_1set__IIIZI",
	"_1gtk_1tree_1store_1set__III_3BI",
	"_1gtk_1tree_1view_1collapse_1row",
	"_1gtk_1tree_1view_1column_1add_1attribute",
	"_1gtk_1tree_1view_1column_1cell_1get_1position",
	"_1gtk_1tree_1view_1column_1cell_1get_1size",
	"_1gtk_1tree_1view_1column_1cell_1set_1cell_1data",
	"_1gtk_1tree_1view_1column_1clear",
	"_1gtk_1tree_1view_1column_1get_1cell_1renderers",
	"_1gtk_1tree_1view_1column_1get_1fixed_1width",
	"_1gtk_1tree_1view_1column_1get_1reorderable",
	"_1gtk_1tree_1view_1column_1get_1resizable",
	"_1gtk_1tree_1view_1column_1get_1sizing",
	"_1gtk_1tree_1view_1column_1get_1sort_1indicator",
	"_1gtk_1tree_1view_1column_1get_1sort_1order",
	"_1gtk_1tree_1view_1column_1get_1spacing",
	"_1gtk_1tree_1view_1column_1get_1visible",
	"_1gtk_1tree_1view_1column_1get_1width",
	"_1gtk_1tree_1view_1column_1new",
	"_1gtk_1tree_1view_1column_1pack_1end",
	"_1gtk_1tree_1view_1column_1pack_1start",
	"_1gtk_1tree_1view_1column_1set_1alignment",
	"_1gtk_1tree_1view_1column_1set_1cell_1data_1func",
	"_1gtk_1tree_1view_1column_1set_1clickable",
	"_1gtk_1tree_1view_1column_1set_1fixed_1width",
	"_1gtk_1tree_1view_1column_1set_1reorderable",
	"_1gtk_1tree_1view_1column_1set_1resizable",
	"_1gtk_1tree_1view_1column_1set_1sizing",
	"_1gtk_1tree_1view_1column_1set_1sort_1indicator",
	"_1gtk_1tree_1view_1column_1set_1sort_1order",
	"_1gtk_1tree_1view_1column_1set_1title",
	"_1gtk_1tree_1view_1column_1set_1visible",
	"_1gtk_1tree_1view_1column_1set_1widget",
	"_1gtk_1tree_1view_1create_1row_1drag_1icon",
	"_1gtk_1tree_1view_1expand_1row",
	"_1gtk_1tree_1view_1get_1background_1area",
	"_1gtk_1tree_1view_1get_1bin_1window",
	"_1gtk_1tree_1view_1get_1cell_1area",
	"_1gtk_1tree_1view_1get_1column",
	"_1gtk_1tree_1view_1get_1columns",
	"_1gtk_1tree_1view_1get_1cursor",
	"_1gtk_1tree_1view_1get_1expander_1column",
	"_1gtk_1tree_1view_1get_1headers_1visible",
	"_1gtk_1tree_1view_1get_1path_1at_1pos",
	"_1gtk_1tree_1view_1get_1rules_1hint",
	"_1gtk_1tree_1view_1get_1selection",
	"_1gtk_1tree_1view_1get_1visible_1rect",
	"_1gtk_1tree_1view_1insert_1column",
	"_1gtk_1tree_1view_1move_1column_1after",
	"_1gtk_1tree_1view_1new_1with_1model",
	"_1gtk_1tree_1view_1remove_1column",
	"_1gtk_1tree_1view_1row_1expanded",
	"_1gtk_1tree_1view_1scroll_1to_1cell",
	"_1gtk_1tree_1view_1scroll_1to_1point",
	"_1gtk_1tree_1view_1set_1cursor",
	"_1gtk_1tree_1view_1set_1drag_1dest_1row",
	"_1gtk_1tree_1view_1set_1enable_1search",
	"_1gtk_1tree_1view_1set_1headers_1visible",
	"_1gtk_1tree_1view_1set_1model",
	"_1gtk_1tree_1view_1set_1rules_1hint",
	"_1gtk_1tree_1view_1set_1search_1column",
	"_1gtk_1tree_1view_1tree_1to_1widget_1coords",
	"_1gtk_1tree_1view_1unset_1rows_1drag_1dest",
	"_1gtk_1tree_1view_1widget_1to_1tree_1coords",
	"_1gtk_1vbox_1new",
	"_1gtk_1vscale_1new",
	"_1gtk_1vscrollbar_1new",
	"_1gtk_1vseparator_1new",
	"_1gtk_1widget_1add_1accelerator",
	"_1gtk_1widget_1add_1events",
	"_1gtk_1widget_1child_1focus",
	"_1gtk_1widget_1create_1pango_1layout__II",
	"_1gtk_1widget_1create_1pango_1layout__I_3B",
	"_1gtk_1widget_1destroy",
	"_1gtk_1widget_1event",
	"_1gtk_1widget_1get_1accessible",
	"_1gtk_1widget_1get_1child_1visible",
	"_1gtk_1widget_1get_1default_1direction",
	"_1gtk_1widget_1get_1default_1style",
	"_1gtk_1widget_1get_1direction",
	"_1gtk_1widget_1get_1events",
	"_1gtk_1widget_1get_1modifier_1style",
	"_1gtk_1widget_1get_1pango_1context",
	"_1gtk_1widget_1get_1parent",
	"_1gtk_1widget_1get_1size_1request",
	"_1gtk_1widget_1get_1style",
	"_1gtk_1widget_1get_1toplevel",
	"_1gtk_1widget_1grab_1focus",
	"_1gtk_1widget_1hide",
	"_1gtk_1widget_1is_1focus",
	"_1gtk_1widget_1map",
	"_1gtk_1widget_1mnemonic_1activate",
	"_1gtk_1widget_1modify_1base",
	"_1gtk_1widget_1modify_1bg",
	"_1gtk_1widget_1modify_1fg",
	"_1gtk_1widget_1modify_1font",
	"_1gtk_1widget_1modify_1style",
	"_1gtk_1widget_1modify_1text",
	"_1gtk_1widget_1realize",
	"_1gtk_1widget_1remove_1accelerator",
	"_1gtk_1widget_1reparent",
	"_1gtk_1widget_1set_1app_1paintable",
	"_1gtk_1widget_1set_1default_1direction",
	"_1gtk_1widget_1set_1direction",
	"_1gtk_1widget_1set_1double_1buffered",
	"_1gtk_1widget_1set_1name",
	"_1gtk_1widget_1set_1parent_1window",
	"_1gtk_1widget_1set_1redraw_1on_1allocate",
	"_1gtk_1widget_1set_1sensitive",
	"_1gtk_1widget_1set_1size_1request",
	"_1gtk_1widget_1set_1state",
	"_1gtk_1widget_1set_1style",
	"_1gtk_1widget_1shape_1combine_1mask",
	"_1gtk_1widget_1show",
	"_1gtk_1widget_1show_1now",
	"_1gtk_1widget_1size_1allocate",
	"_1gtk_1widget_1size_1request",
	"_1gtk_1widget_1style_1get__I_3B_3II",
	"_1gtk_1widget_1style_1get__I_3B_3JI",
	"_1gtk_1widget_1translate_1coordinates",
	"_1gtk_1widget_1unrealize",
	"_1gtk_1window_1activate_1default",
	"_1gtk_1window_1add_1accel_1group",
	"_1gtk_1window_1deiconify",
	"_1gtk_1window_1get_1focus",
	"_1gtk_1window_1get_1icon_1list",
	"_1gtk_1window_1get_1mnemonic_1modifier",
	"_1gtk_1window_1get_1position",
	"_1gtk_1window_1get_1size",
	"_1gtk_1window_1iconify",
	"_1gtk_1window_1maximize",
	"_1gtk_1window_1move",
	"_1gtk_1window_1new",
	"_1gtk_1window_1present",
	"_1gtk_1window_1remove_1accel_1group",
	"_1gtk_1window_1resize",
	"_1gtk_1window_1set_1default",
	"_1gtk_1window_1set_1destroy_1with_1parent",
	"_1gtk_1window_1set_1geometry_1hints",
	"_1gtk_1window_1set_1icon_1list",
	"_1gtk_1window_1set_1modal",
	"_1gtk_1window_1set_1resizable",
	"_1gtk_1window_1set_1title",
	"_1gtk_1window_1set_1transient_1for",
	"_1gtk_1window_1set_1type_1hint",
	"_1gtk_1window_1unmaximize",
	"_1pango_1attr_1background_1new",
	"_1pango_1attr_1font_1desc_1new",
	"_1pango_1attr_1foreground_1new",
	"_1pango_1attr_1list_1change",
	"_1pango_1attr_1list_1insert",
	"_1pango_1attr_1list_1new",
	"_1pango_1attr_1list_1unref",
	"_1pango_1attr_1rise_1new",
	"_1pango_1attr_1shape_1new",
	"_1pango_1attr_1strikethrough_1new",
	"_1pango_1attr_1underline_1new",
	"_1pango_1attr_1weight_1new",
	"_1pango_1context_1get_1base_1dir",
	"_1pango_1context_1get_1language",
	"_1pango_1context_1get_1metrics",
	"_1pango_1context_1list_1families",
	"_1pango_1context_1set_1base_1dir",
	"_1pango_1context_1set_1language",
	"_1pango_1font_1description_1copy",
	"_1pango_1font_1description_1free",
	"_1pango_1font_1description_1from_1string",
	"_1pango_1font_1description_1get_1family",
	"_1pango_1font_1description_1get_1size",
	"_1pango_1font_1description_1get_1style",
	"_1pango_1font_1description_1get_1weight",
	"_1pango_1font_1description_1new",
	"_1pango_1font_1description_1set_1family",
	"_1pango_1font_1description_1set_1size",
	"_1pango_1font_1description_1set_1stretch",
	"_1pango_1font_1description_1set_1style",
	"_1pango_1font_1description_1set_1weight",
	"_1pango_1font_1description_1to_1string",
	"_1pango_1font_1face_1describe",
	"_1pango_1font_1family_1get_1name",
	"_1pango_1font_1family_1list_1faces",
	"_1pango_1font_1get_1metrics",
	"_1pango_1font_1metrics_1get_1approximate_1char_1width",
	"_1pango_1font_1metrics_1get_1ascent",
	"_1pango_1font_1metrics_1get_1descent",
	"_1pango_1font_1metrics_1unref",
	"_1pango_1language_1from_1string",
	"_1pango_1layout_1context_1changed",
	"_1pango_1layout_1get_1alignment",
	"_1pango_1layout_1get_1attributes",
	"_1pango_1layout_1get_1indent",
	"_1pango_1layout_1get_1iter",
	"_1pango_1layout_1get_1justify",
	"_1pango_1layout_1get_1line",
	"_1pango_1layout_1get_1line_1count",
	"_1pango_1layout_1get_1log_1attrs",
	"_1pango_1layout_1get_1size",
	"_1pango_1layout_1get_1spacing",
	"_1pango_1layout_1get_1tabs",
	"_1pango_1layout_1get_1text",
	"_1pango_1layout_1get_1width",
	"_1pango_1layout_1index_1to_1pos",
	"_1pango_1layout_1iter_1free",
	"_1pango_1layout_1iter_1get_1index",
	"_1pango_1layout_1iter_1get_1line_1extents",
	"_1pango_1layout_1iter_1get_1run",
	"_1pango_1layout_1iter_1next_1line",
	"_1pango_1layout_1iter_1next_1run",
	"_1pango_1layout_1line_1get_1extents",
	"_1pango_1layout_1line_1x_1to_1index",
	"_1pango_1layout_1new",
	"_1pango_1layout_1set_1alignment",
	"_1pango_1layout_1set_1attributes",
	"_1pango_1layout_1set_1auto_1dir",
	"_1pango_1layout_1set_1font_1description",
	"_1pango_1layout_1set_1indent",
	"_1pango_1layout_1set_1justify",
	"_1pango_1layout_1set_1single_1paragraph_1mode",
	"_1pango_1layout_1set_1spacing",
	"_1pango_1layout_1set_1tabs",
	"_1pango_1layout_1set_1text",
	"_1pango_1layout_1set_1width",
	"_1pango_1layout_1set_1wrap",
	"_1pango_1layout_1xy_1to_1index",
	"_1pango_1tab_1array_1free",
	"_1pango_1tab_1array_1get_1size",
	"_1pango_1tab_1array_1get_1tabs",
	"_1pango_1tab_1array_1new",
	"_1pango_1tab_1array_1set_1tab",
	"g_1main_1context_1wakeup",
	"getenv",
	"localeconv_1decimal_1point",
	"memmove__III",
	"memmove__ILorg_eclipse_swt_internal_gtk_GInterfaceInfo_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_GObjectClass_2",
	"memmove__ILorg_eclipse_swt_internal_gtk_GTypeInfo_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_GdkEventButton_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_GtkAdjustment_2",
	"memmove__ILorg_eclipse_swt_internal_gtk_GtkCellRendererClass_2",
	"memmove__ILorg_eclipse_swt_internal_gtk_GtkFixed_2",
	"memmove__ILorg_eclipse_swt_internal_gtk_GtkTargetEntry_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_GtkWidgetClass_2",
	"memmove__ILorg_eclipse_swt_internal_gtk_PangoAttribute_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_XButtonEvent_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_XClientMessageEvent_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_XCrossingEvent_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_XExposeEvent_2I",
	"memmove__ILorg_eclipse_swt_internal_gtk_XFocusChangeEvent_2I",
	"memmove__I_3BI",
	"memmove__I_3CI",
	"memmove__I_3DI",
	"memmove__I_3II",
	"memmove__I_3JI",
	"memmove__Lorg_eclipse_swt_internal_gtk_GObjectClass_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GTypeQuery_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkColor_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkDragContext_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventAny_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventButton_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventCrossing_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventExpose_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventFocus_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventKey_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventMotion_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventScroll_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventVisibility_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEventWindowState_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkEvent_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkImage_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkRectangle_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GdkVisual_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkAdjustment_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkBorder_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkCellRendererClass_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkColorSelectionDialog_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkCombo_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkFileSelection_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkFixed_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkSelectionData_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkTargetPair_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_GtkWidgetClass_2I",
	"memmove__Lorg_eclipse_swt_internal_gtk_PangoAttribute_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_PangoItem_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_PangoLayoutLine_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_PangoLayoutRun_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_PangoLogAttr_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_XButtonEvent_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_XCrossingEvent_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_XExposeEvent_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_XFocusChangeEvent_2II",
	"memmove__Lorg_eclipse_swt_internal_gtk_XVisibilityEvent_2II",
	"memmove___3BII",
	"memmove___3CII",
	"memmove___3III",
	"memmove___3I_3BI",
	"memmove___3JII",
	"memset",
	"strlen",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif
