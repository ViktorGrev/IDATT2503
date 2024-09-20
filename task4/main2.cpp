#include <gtkmm.h>

class Window : public Gtk::Window {
public:
    Gtk::Box box;
    Gtk::Entry lastnameEntry;
    Gtk::Entry nameEntry;
    Gtk::Button button;
    Gtk::Label label;
    Gtk::Label nameLabel;
    Gtk::Label lastnameLabel;

    Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL) {
        button.set_label("Combine names");
        nameLabel.set_text("First name");
        lastnameLabel.set_text("Last name");

        button.set_sensitive(false);

        box.pack_start(nameLabel);
        box.pack_start(nameEntry);
        box.pack_start(lastnameLabel);
        box.pack_start(lastnameEntry);
        box.pack_start(button);
        box.pack_start(label);

        add(box);
        show_all();

        nameEntry.signal_changed().connect([this]() {
            on_entry_changed();
        });

        lastnameEntry.signal_changed().connect([this]() {
            on_entry_changed();
        });

        button.signal_clicked().connect([this]() {
          label.set_text("Names combined: " + nameEntry.get_text() + " " + lastnameEntry.get_text());
        });
    }
protected:
    // Signal handler to enable/disable the button
    void on_entry_changed() {
        // Check if both entries have text
        bool both_filled = !nameEntry.get_text().empty() && !lastnameEntry.get_text().empty();
        button.set_sensitive(both_filled);
    }
};

int main() {
    auto app = Gtk::Application::create();
    Window window;
    return app->run(window);
}

