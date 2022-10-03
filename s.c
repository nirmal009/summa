static void
output_state (GtkToggleButton *source,
              gpointer         user_data)
{
  g_print ("Toggle button "%s" is active: %s",
           gtk_button_get_label (GTK_BUTTON (source)),
           gtk_toggle_button_get_active (source) ? "Yes" : "No");
}

static void
make_toggles (void)
{
  GtkWidget *window, *toggle1, *toggle2;
  GtkWidget *box;
  const char *text;

  window = gtk_window_new ();
  box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 12);

  text = "Hi, I’m toggle button one";
  toggle1 = gtk_toggle_button_new_with_label (text);

  g_signal_connect (toggle1, "toggled",
                    G_CALLBACK (output_state),
                    NULL);
  gtk_box_append (GTK_BOX (box), toggle1);

  text = "Hi, I’m toggle button two";
  toggle2 = gtk_toggle_button_new_with_label (text);
  g_signal_connect (toggle2, "toggled",
                    G_CALLBACK (output_state),
                    NULL);
  gtk_box_append (GTK_BOX (box), toggle2);

  gtk_window_set_child (GTK_WINDOW (window), box);
  gtk_widget_show (window);
}

